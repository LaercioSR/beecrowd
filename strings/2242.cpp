#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    string s, v = "";
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    bool hasFunny = true;
    int len, lenV, m;

    cin >> s;

    len = s.size();

    for(int i = 0; i < len; i++) {
        if(find(begin(vowels), end(vowels), s[i]) != end(vowels)) {
            v += s[i];
        }
    }

    lenV = v.size();
    m = lenV/2;

    for(int i = 0, j = lenV-1; i < m; i++, j--) {
        if(v[i] != v[j]) {
            hasFunny = false;
            break;
        }
    }

    cout << (hasFunny ? 'S' : 'N') << endl;
 
    return 0;
}