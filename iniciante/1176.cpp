#include <iostream>
 
using namespace std;
 
int main() {
    int t;

    cin >> t;

    for(int i = 0; i < t; i++) {
        long long n1 = 0, n2 = 1;
        int n;

        cin >> n;

        for(int i = 0; i < n; i++) {
            long long tmp = n1;
            n1 = n2;
            n2 = tmp + n2;
        }

        cout << "Fib(" << n << ") = " << n1 << endl;
    }
 
    return 0;
}