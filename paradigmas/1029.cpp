#include <iostream>
 
using namespace std;

int calls = 0;

int fibonacci(int n) {
    calls++;
    if(n == 1)
        return 1;
    else if(n == 0)
        return 0;
    return fibonacci(n-1) + fibonacci(n-2);
}
 
int main() {
    int n;

    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        int result = fibonacci(x);

        cout << "fib(" << x << ") = " << calls-1 << " calls = " << result << endl;
        calls = 0;
    }
 
    return 0;
}