#include <iostream>

using namespace std;

int main() {
    int x;

    cin >> x;

    for(int i = 2; i <= x; i+=2) {
        int y = i * i;
        cout << i << "^2 = " << y << "\n";
    }

    return 0;
}