#include <iostream>
 
using namespace std;
 
int main() {
    int x, y, bigger, smaller, sum = 0;

    cin >> x;
    cin >> y;

    if(x > y) {
        bigger = x;
        smaller = y;
    } else {
        bigger = y;
        smaller = x;
    }
    for(int i = smaller; i <= bigger; i++) {
        if(i % 13 != 0) {
            sum += i;
        }
    }
    cout << sum << endl;
 
    return 0;
}