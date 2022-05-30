#include <iostream>
 
using namespace std;
 
int main() {
    int s, t, f, h;

    cin >> s >> t >> f;

    h = (s + t + f) % 24;

    if(h < 0)
        h += 24;

    cout << h << endl;
 
    return 0;
}