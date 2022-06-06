#include <iostream>
 
using namespace std;
 
int main() {
    string s;

    getline(cin, s);

    while(s[0] != '*') {
        char first = s[0], firstUp, firstLo;
        int len = s.size();
        bool isT = true;

        if(first >= 65 && first <= 90) {
            firstUp = first;
            firstLo = char(first+32);
        } else {
            firstUp = char(first-32);
            firstLo = first;
        }

        for(int i = 2;  i < len; i++) {
            if(s[i-1] == ' ' && (s[i] != firstUp && s[i] != firstLo)) {
                isT = false;
                break;
            }
        }

        char r = isT ? 'Y' : 'N';
        cout << r << endl;

        getline(cin, s);
    }
 
    return 0;
}