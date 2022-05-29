#include <iostream>
 
using namespace std;
 
int main() {
    int t, a, b, c, d, e, total = 0;

    cin >> t;
    cin >> a >> b >> c >> d >> e;
    
    if(a == t)
        total++;
    if(b == t)
        total++;
    if(c == t)
        total++;
    if(d == t)
        total++;
    if(e == t)
        total++;

    cout << total << endl;
 
    return 0;
}