#include <iostream>
 
using namespace std;
 
int main() {
    int x;

    cin >> x;

    while(x > 0){
        for(int i = 1; i <= x; i++) {
            cout << i;
            if(i % x == 0) 
                cout << endl;
            else
                cout << " ";
        }

        cin >> x;
    }

    
 
    return 0;
}