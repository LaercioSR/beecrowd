#include <iostream>
 
using namespace std;
 
int main() {
    int a, n, result = 0;

    cin >> a >> n;
    while(n <= 0)
        cin >> n;

    for(int i = 0; i < n; i++) {
        result += a + i;
    }
    cout << result << endl;
 
    return 0;
}