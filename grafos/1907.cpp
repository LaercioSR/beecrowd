#include <bits/stdc++.h>
#include <sys/resource.h>
 
using namespace std;

#define MAX 1030

int n, m;
char p[MAX][MAX];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isNext(int x, int y) {
    return x >= 0 && x < n 
        && y >= 0 && y < m 
        && p[x][y] == '.';
}

void paintPixel(int x, int y) {
    p[x][y] = 'o';
    for(int i = 0; i < 4; i++) {
        if(isNext(x+dx[i], y+dy[i])) {
            paintPixel(x+dx[i], y+dy[i]);
        }
    }
}
void setstack( void ) {
    const rlim_t kStackSize = 64L * 1024L * 1024L;
    struct rlimit rl;
    int result = getrlimit( RLIMIT_STACK, &rl);
    if(result == 0 && rl.rlim_cur < kStackSize ) {
        rl.rlim_cur = kStackSize;
        result = setrlimit( RLIMIT_STACK, &rl);
        if( result != 0 )
        fprintf(stderr, "setrlimit returned result = %d\n", result);
    }
}
 
int main() {
    setstack();
    int c = 0;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        scanf("%s", p[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(p[i][j] == '.') {
                c++;
                paintPixel(i, j);
            }
        }
    }

    printf("%d\n", c);

    return 0;
}