#include <iostream>

using namespace std;


int main() {
    string s;

    while(getline(cin, s)) {
        int n = s.size();
        bool isValid = true, hasUpper = false, hasLower = false, hasDigit = false;

        if(n < 6 || n > 32) {
            isValid = false;
        } else {
            for(int i = 0; i < n; i++) {
                if(s[i] >= 48 && s[i] <= 57) {
                    hasDigit = true;
                } else if(s[i] >= 65 && s[i] <= 90) {
                    hasUpper = true;
                } else if(s[i] >= 97 && s[i] <= 122){
                    hasLower = true;
                } else {
                    isValid = false;
                    break;
                }
            }

            if(!hasUpper || !hasLower || !hasDigit) {
                isValid = false;
            }
        }

        cout << (isValid ? "Senha valida." : "Senha invalida.") << endl;
    }
}