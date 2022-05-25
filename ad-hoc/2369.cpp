#include <iostream>

using namespace std;

int main() {
    int n, total = 7;

    cin >> n;

    n -= 10;
    if(n > 0) {
        total += n;
        n -= 20;
        if(n > 0) {
            total += n;
            n -= 70;
            if(n > 0) {
                total += n * 3;
            }
        }
    }

    cout << total << endl;

    return 0;
}