#include <iostream>
 
using namespace std;
 
int main() {
    int x, z, sum = 0, i = 0;

    cin >> x;
    cin >> z;
    while(z <= x)
        cin >> z;

    while(sum <= z)
        sum += x + i++;

    cout << i << endl;
 
    return 0;
}