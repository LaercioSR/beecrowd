#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n--) {
        int total = 0;
        string s, num = "";
        bool isNum = false;

        cin >> s;

        for(int i = 0, len = s.size(); i < len; i++) {
            if(s[i] >= 48 && s[i] <= 57) {
                num += s[i];
                isNum = true;
            } else if(isNum) {
                total += stoi(num);
                isNum = false;
                num = "";
            }
        }
        if(isNum) {
            total += stoi(num);
        }

        cout << total << endl;
    }
 
    return 0;
}