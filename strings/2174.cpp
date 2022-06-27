#include <iostream>
#include <set>
 
using namespace std;
 
int main() {
    int n, qtt;
    set<string> p;

    cin >> n;

    while(n--) {
        string pi;

        cin >> pi;

        p.insert(pi);
    }

    qtt = 151 - p.size();

    printf("Falta(m) %d pomekon(s).\n", qtt);
    
    return 0;
}