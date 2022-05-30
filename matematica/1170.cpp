#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;
    for(int i = 0; i < n; i++) {
        float s;
        int d = 0 ;

        cin >> s;

        while(s > 1) {
            s /= 2;
            d++;
        }

        cout << d << " dias" << endl;
    }
 
    return 0;
}