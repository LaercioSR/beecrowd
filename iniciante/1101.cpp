#include <iostream>
 
using namespace std;
 
int main() {
    int m, n;
 
    cin >> m >> n;

    while(m > 0 and n > 0) {
        int bigger, smaller, sum=0;

        if(m > n) {
            bigger = m;
            smaller = n;
        } else {
            bigger = n;
            smaller = m;
        }

        for(int i = smaller; i <= bigger; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;

        cin >> m >> n;
    }
 
    return 0;
}