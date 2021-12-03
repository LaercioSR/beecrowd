#include <iostream>
using namespace std;

int main() {
    int x, in = 0, out = 0;

    cin >> x;

    int y;
    for(int i = 0; i < x; i++) {
        cin >> y;
        if(y >= 10 and y <= 20) {
            in++;
        } else {
            out++;
        }
    }

    cout << in << " in\n";
    cout << out << " out\n";
}