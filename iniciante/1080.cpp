#include <iostream>

using namespace std;

int main() {
    int bigger, position;

    for(int i = 0; i < 6; i++) {
        int x;
        cin >> x;

        if(i == 0 or x > bigger) {
            bigger = x;
            position = i+1;    
        }
    }

    cout << bigger << endl;
    cout << position << endl;

    return 0;
}