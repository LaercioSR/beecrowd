#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        char t[4];
        int result;

        cin >> t;

        if(t[0] == t[2]) {
            result = (t[0] - '0') * (t[2] - '0');
        } else if(t[1] >= 65 && t[1] <= 90) {
            result = t[2] - t[0];
        } else if(t[1] >= 97 && t[1] <= 122) {
            result = (t[0] - '0') + (t[2] - '0');
        }

        cout << result << endl;
    }
 
    return 0;
}