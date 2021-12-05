#include <iostream>

using namespace std;

int main() {
    int x;

    cin >> x;

    for(int i = 0; i < x; i++) {
        int y;
        cin >> y;

        if(y == 0) {
            cout << "NULL\n";
            continue;
        }
        if(y % 2 == 0) {
            cout << "EVEN ";
        } else {
            cout << "ODD ";
        }
        if(y > 0) {
            cout << "POSITIVE\n";
        } else {
            cout << "NEGATIVE\n";
        }
    }

    return 0;
}