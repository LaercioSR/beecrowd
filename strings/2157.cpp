#include <iostream>
#include <string> 
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n--) {
        int b, e;
        string s;

        cin >> b >> e;

        for(int i = b; i <= e; i++) {
            s += to_string(i);
        }
        cout << s;
        for(int i = s.size()-1; i >= 0; i--) {
            cout << s[i];
        }
        cout << endl;
    }
 
    return 0;
}