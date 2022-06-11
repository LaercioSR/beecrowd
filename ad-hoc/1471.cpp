#include <iostream>
 
using namespace std;
 
int main() {
    int n, r;

    while(scanf("%d %d", &n, &r) != EOF) {
        int d = 0;
        bool m[n];

        for(int i = 0; i < n; i++) {
            m[i] = 0;
        }
        for(int i = 0; i < r; i++) {
            int v;
            cin >> v;
            m[v-1] = 1;
        }
        if(n == r) {
            cout << "*" << endl;
            continue;
        }
        for(int i = 0; i < n; i++) {
            if(!m[i]) {
                cout << i+1;
                d++;
                cout << " ";
                if(d == n-r) {
                    cout << endl;
                }
            }
        }
    }
    
 
    return 0;
}