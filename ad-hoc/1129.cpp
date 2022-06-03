#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n != 0) {
        for(int i = 0; i < n; i++) {
            bool isA = false, isB = false, isC = false, isD = false, isE = false;
            short int a, b, c, d, e;

            cin >> a >> b >> c >> d >> e;

            if(a <= 127)
                isA = true;
            if(b <= 127)
                isB = true;
            if(c <= 127)
                isC = true;
            if(d <= 127)
                isD = true;
            if(e <= 127)
                isE = true;

            int total = (isA + isB + isC + isD + isE);
            if(total == 0 || total > 1)
                cout << '*' << endl;
            else if(isA)
                cout << 'A' << endl;
            else if(isB)
                cout << 'B' << endl;
            else if(isC)
                cout << 'C' << endl;
            else if(isD)
                cout << 'D' << endl;
            else if(isE)
                cout << 'E' << endl;
        }

        cin >> n;
    }
 
    return 0;
}