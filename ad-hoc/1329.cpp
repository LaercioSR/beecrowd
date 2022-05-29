#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;
    while(n != 0) {
        int mary = 0, john = 0;
        for(int i = 0; i < n; i++) {
            int r;

            cin >> r;

            if(r == 0)
                mary++;
            else
                john++;
        }

        cout << "Mary won " << mary << " times and John won " << john << " times" << endl;
        cin >> n;
    }
 
    return 0;
}