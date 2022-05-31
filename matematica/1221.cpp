#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, tests = 0;
        bool isPrime = true;

        cin >> x;


        if(x == 1) {
            cout << "Not Prime" << endl;
            continue;
        }
        if(x == 2) {
            cout << "Prime" << endl;
            continue;
        }
        if(x % 2 == 0) {
            cout << "Not Prime" << endl;
            continue;
        }

        for(int j = 3; j < sqrt(x)+1; j+=2){
            if(x % j == 0){
                isPrime = false;
            }
        }
        if(isPrime) {
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }
    }
 
    return 0;
}