#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    // Clear input
    string clear;
    getline(cin, clear);
    for(int i = 0; i < n; i++) {
        string s;

        getline(cin, s);
        int len = s.size();
        int m = len/2;
        for(int j = m-1; j >= 0; j--) {
            cout << s[j];
        }
        for(int j = len-1; j >= m; j--) {
            cout << s[j];
        }
        cout << endl;
    }
 
    return 0;
}