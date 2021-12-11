#include <iostream>
 
using namespace std;
 
int main() {
    int x;

    cin >> x;
    while(x != 0) {
        int sum = 0;
        for(int i = x; i < x+10; i++)
            if(i % 2 == 0)
                sum += i;
        cout << sum << endl;
        cin >> x;
    }
 
    return 0;
}