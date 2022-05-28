#include <iostream>
 
using namespace std;
 
int main() {
    int m;

    cin >> m;

    while(m != 0) {
        int x = 1, a[m][m];

        while(x != m+1) {
            int i = x-1, j = 0;
            while(i != m) {
                a[i][j] = x;
                a[j][i] = x;
                i++;
                j++;
            }
            x++;
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