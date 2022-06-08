#include <iostream>
 
using namespace std;
 
int main() {
    int a, b, c;
    bool isHappy;

    cin >> a >> b >> c;

    if(a < b) {
        if(b >= c) {
            isHappy = false;
        } else if(b-a > c-b) {
            isHappy = false;
        } else {
            isHappy = true;
        }
    } else if(a > b) {
        if(b <= c) {
            isHappy = true;
        } else if(a-b > b-c) {
            isHappy = true;
        } else {
            isHappy = false;
        }
    } else {
        if(b >= c) {
            isHappy = false;
        } else {
            isHappy = true;
        }
    }

    if(isHappy)
        cout << ":)" << endl;
    else
        cout << ":(" << endl;
 
    return 0;
}