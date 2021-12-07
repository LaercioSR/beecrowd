#include <iostream>

using namespace std;

int main(){ 
    unsigned long int x, y, z; 

    while(cin >> x >> y) {
        z = x ^ y;
        cout << z << endl;
    } 

    return 0; 
}