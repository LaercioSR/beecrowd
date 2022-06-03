#include <iostream>
#include <map>
#include <ctype.h>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    string clear;
    getline(cin, clear);
    for(int i = 0; i < n; i++) {
        string s;
        map<char, int> m;
        int max = 1, len;

        getline(cin, s);
        len = s.size();

        for(int j = 0; j < len; j++) {
            if (isalpha(s[j])) {
                char c = tolower(s[j]);

                if(m.find(c) == m.end()) {
                    m[c] = 1;
                } else {
                    m[c]++;
                    if(m[c] > max) {
                        max = m[c];
                    }
                }
            }
        }
        for(map<char, int>:: iterator itr = m.begin(); itr != m.end(); itr++) {
            if(itr->second == max)
                cout << itr->first;
        }
        cout << endl;
    }
 
    return 0;
}