#include <iostream>
 
using namespace std;
 
int main() {
    char s[50];

    while (cin.getline(s, 50)) {
        int isUpper = 0;
        for(int i = 0; i < 50; i++) {
            if (s[i] == '\0') break;
            if(!isUpper) {
                if(s[i] >= 97) {
                    cout << char(s[i]-32);
                    isUpper = 1;
                } else if(s[i] == 32) {
                    cout << s[i];
                } else {
                    cout << s[i];
                    isUpper = 1;
                }
            } else {
                if(s[i] >= 65 && s[i] <= 90) {
                    cout << char(s[i]+32);
                    isUpper = 0;
                } else if(s[i] == 32) {
                    cout << s[i];
                } else {
                    cout << s[i];
                    isUpper = 0;
                }
            }
        }
        cout << endl;
    }

 
    return 0;
}