#include <iostream>
 
using namespace std;
 
int main() {
    int x[5];
    bool isCompatible = true;

    for(int i = 0; i < 5; i++) {
        cin >> x[i];
    }
    for(int i = 0; i < 5; i++) {
        int y;

        cin >> y;

        if(x[i] && y)
            isCompatible = false;
        else if(!x[i] && !y)
            isCompatible = false;
    }

    if(isCompatible)
        cout << 'Y' << endl;
    else
        cout << 'N' << endl;
 
    return 0;
}