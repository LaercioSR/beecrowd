#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, sum = 0;

        cin >> x;
        
        for(int j = 1; j <= x; j++)
            if(x % j == 0 && x != j)
                sum += j;

        if(sum == x)
            cout << x << " eh perfeito" << endl;
        else
            cout << x << " nao eh perfeito" << endl;
    }
 
    return 0;
}