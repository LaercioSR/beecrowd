#include <iostream>
 
using namespace std;
 
int main() {
    unsigned long long int a, b, c;

    cin >> a >> b;

    c = ((a+b)*(b-a+1))/2;

    cout << c << endl;
 
    return 0;
}