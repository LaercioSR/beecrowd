#include <iostream>
#include <locale>
 
using namespace std;
 
int main() {
    string s;

    while(getline(cin, s)) {
        char last_char = ' ';
        int count = 0;
        bool has_counted = false;
        locale loc;

        size_t pos = 0;
        while ((pos = s.find(' ')) != string::npos) {
            string word = s.substr(0, pos);
            s.erase(0, pos + 1);

            if(last_char == tolower(word[0],loc)) {
                if(!has_counted) {
                    has_counted = true;
                    count++;
                }
            } else {
                last_char = tolower(word[0],loc);
                has_counted = false;
            }
        }
        if(last_char == tolower(s[0],loc) && !has_counted) {
            count++;
        } 

        cout << count << endl;
    }
 
    return 0;
}