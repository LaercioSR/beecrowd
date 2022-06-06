#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        unsigned long long int x, totalWheat = 0, totalKg;

        cin >> x;

        for(int j = 0; j < x; j++) {
            unsigned long long int result = pow(2, j);
            totalWheat += result;
        }

        totalKg = totalWheat/12000;

        cout << totalKg << " kg" << endl;
    }
 
    return 0;
}