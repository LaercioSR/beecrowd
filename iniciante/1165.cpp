#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, is_prime = true;

        cin >> x;
        
        for(int j = 2; j <= x; j++)
            if(x % j == 0 && x != j) {
                is_prime = false;
                break;
            }

        if(is_prime)
            cout << x << " eh primo" << endl;
        else
            cout << x << " nao eh primo" << endl;
    }
 
    return 0;
}