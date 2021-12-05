#include <iostream>

using namespace std;

int main() {
    int x;

    cin >> x;

    for(int i = 1; i <= 10; i++) {
        int result = x * i;
        cout << i << " x " << x << " = " << result << "\n";
    }

    return 0;
}