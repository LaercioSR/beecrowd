#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, even[1000001], odd[1000001], ce = 0, co = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;

        cin >> x;

        if(x % 2 == 0) {
            even[ce] = x;
            ce++;
        } else {
            odd[co] = x; 
            co++;
        }
    }

    sort(even, even+ce);
    sort(odd, odd+co);
    for(int i = 0; i < ce; i++) {
        printf("%i\n", even[i]);
    }
    for(int i = co-1; i >= 0; i--) {
        printf("%i\n", odd[i]);
    }
 
    return 0;
}