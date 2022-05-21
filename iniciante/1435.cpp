#include <iostream>
 
using namespace std;
 
int main() {
    int m;

    cin >> m;

    while(m != 0) {
        int start = 0, end = m-1, x = 1, a[m][m];

        while(x <= m*m) {
            for(int i = start; i <= end; i++) {
                a[start][i] = x;
            }
            for(int i = start; i <= end; i++) {
                a[i][start] = x;
            }
            for(int i = end; i >= start; i--) {
                a[end][i] = x;
            }
            for(int i = end; i >= start; i--) {
                a[i][end] = x;
            }
            x++;
            start++;
            end--;
        }
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < m; j++) {
                if(j != 0)
                    cout << " ";
                printf("%3d", a[i][j]);
            }
            cout << endl;
        }

        cout << endl;
        cin >> m;
    }
}