#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    string s[n], si;

    for(int i = 0; i < n; i++) {
        cin >> si;

        if(si.size() == 3 && (si.substr(0, 2) == "OB" || si.substr(0, 2) == "UR")) {
            s[i] = si.substr(0, 2) + "I";
        } else {
            s[i] = si;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << s[i];
        if(i != n-1)
            cout << " ";
    }
    cout << endl;
 
    return 0;
}