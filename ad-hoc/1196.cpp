#include <iostream>
#include <map>
 
using namespace std;
 
int main() {
    string s;
    map<char, char> t = {
        {'B', 'V'}, {'C', 'X'}, {'D', 'S'}, {'E', 'W'},
        {'F', 'D'}, {'G', 'F'}, {'H', 'G'}, {'I', 'U'},
        {'J', 'H'}, {'K', 'J'}, {'L', 'K'}, {'M', 'N'},
        {'N', 'B'}, {'O', 'I'}, {'P', 'O'}, {'R', 'E'},
        {'S', 'A'}, {'T', 'R'}, {'U', 'Y'}, {'V', 'C'},
        {'X', 'Z'}, {'W', 'Q'}, {'Y', 'T'}, {'1', '`'},
        {'2', '1'}, {'3', '2'}, {'4', '3'}, {'5', '4'},
        {'6', '5'}, {'7', '6'}, {'8', '7'}, {'9', '8'},
        {'0', '9'}, {'-', '0'}, {'=', '-'}, {'[', 'P'},
        {']', '['}, {'\\', ']'}, {';', 'L'}, {'\'', ';'},
        {',', 'M'}, {'.', ','}, {'/', '.'}
    };

    while(getline(cin, s)) {
        int len = s.size();

        for(int i = 0; i < len; i++) {
            if(t.find(s[i]) == t.end())
                cout << s[i];
            else
                cout << t[s[i]];
        }
        cout << endl;
    }
 
    return 0;
}