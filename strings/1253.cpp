#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        string text, newText = "";
        int np, len;

        cin >> text;
        cin >> np;

        len = text.length();
        for(int j = 0; j < len; j++) {
            int codeChar = text[j]-np;
            if(codeChar < 65) {
                codeChar = 91 - (65 - codeChar);
            } else if(codeChar > 90 && codeChar < 97) {
                codeChar = 123 - (97 - codeChar);
            }
            newText += char(codeChar);
        }
        cout << newText << endl;
    }
}