#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n--) {
        int m = 0, v = 0, p1m, p1v, p2m, p2v;
        char x;

        cin >> p1m >> x >> p1v;
        m += p1m, v += p1v;
        cin >> p2v >> x >> p2m;
        m += p2m, v += p2v;

        if(m > v || (m == v && p2m > p1v))
            cout << "Time 1" << endl;
        else if(m < v || (m == v && p2m < p1v))
            cout << "Time 2" << endl;
        else
            cout << "Penaltis" << endl;
    }
 
    return 0;
}