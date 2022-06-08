#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    string clear;
    getline(cin, clear);
    while(n--) {
        string s;
        bool letters[26];
        int qtt = 0;

        for(int i = 0; i < 26; i++) {
            letters[i] = false;
        }

        getline(cin, s);
        int len = s.size();

        for(int i = 0; i < len; i++) {
            if(s[i] >= 97 && s[i] <= 122) {
                if(!letters[s[i]-97]) {
                    letters[s[i]-97] = true;
                    qtt++;
                }
            }
        }

        if(qtt == 26) {
            cout << "frase completa" << endl;
        } else if(qtt >= 13) {
            cout << "frase quase completa" << endl;
        } else {
            cout << "frase mal elaborada" << endl;
        }
    }
 
    return 0;
}