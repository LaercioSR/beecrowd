#include <iostream>
 
using namespace std;
 
int main() {
    int n, m;

    cin >> n >> m;

    while (n != 0 || m != 0) {
        int par[n] = {}, pro[m] = {};
        bool c[n][m], is1 = true, is2 = true, is3 = true, is4 = true;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> c[i][j];
                par[i] += c[i][j];
                pro[j] += c[i][j];
            }
        }
        for(int i = 0; i < n; i++) {
            if(par[i] == m)
                is1 = false;
            if(par[i] == 0)
                is4 = false;
        }
        for(int i = 0; i < m; i++) {
            if(pro[i] == n)
                is3 = false;
            if(pro[i] == 0)
                is2 = false;
        }
        cout << (is1+is2+is3+is4) << endl;

        cin >> n >> m;
    }
 
    return 0;
}