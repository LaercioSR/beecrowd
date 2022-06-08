#include <iostream>
 
using namespace std;
 
int main() {
    int n, x, y, a[16][16], totalLoop;

    cin >> n;

    while(n != 0) {
        x = 1;
        y = 0;
        totalLoop = n*2-1;

        while(y < totalLoop) {
            int i = y < n ? 0 : y-n+1;
            int j = y < n ? y : n-1;
            while(i <= n) {
                a[i][j] = x;
                i++;
                j--;
            }
            x *= 2;
            y++;
        }

        int format = to_string(x/2).size();
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(j != 0)
                    cout << " ";
                printf("%*d",format, a[i][j]);
            }
            cout << endl;
        }

        cout << endl;
        cin >> n;
    }
}