#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n != 0) {
        int pos = 0, side;

        while(n--) {
            char l;

            cin >> l;

            if(l == 'D')
                pos++;
            else
                pos--;
        }
        side = pos % 4;

        if(side == 0)
            cout << 'N' << endl;
        else if(side == 1 || side == -3)
            cout << 'L' << endl;
        else if(side == 2 || side == -2)
            cout << 'S' << endl;
        else if(side == 3 || side == -1)
            cout << 'O' << endl;

        cin >> n;
    }
 
    return 0;
}