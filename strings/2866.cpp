#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n--) {
        string s, d = "";

        cin >> s;

        for(int i = 0, len = s.size(); i < len; i++) {
            if(s[i] >= 96 && s[i] <= 122)
                d = s[i] + d;
        }

        cout << d << endl;
    }
 
    return 0;
}