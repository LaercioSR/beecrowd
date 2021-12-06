#include <iostream>
 
using namespace std;
 
int main() {
    for(int i = 1; i <= 9; i+=2) {
        for(int j = 6; j >= 4; j--) {
            cout << "I=" << i << " J=" << i+j << endl;
        }
    }
 
    return 0;
}