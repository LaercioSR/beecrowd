#include <iostream>
 
using namespace std;
 
int main() {
    int n, y = 0;
    float p;

    cin >> n;

    for(int i = 0; i < n; i++) {
        bool q;

        cin >> q;

        if(!q)
            y++;
    }

    p = (float)y/n;
    if(p > 0.5)
        cout << 'Y' << endl;
    else
        cout << 'N' << endl;
 
    return 0;
}