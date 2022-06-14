#include <iostream>
#include <map>
#include <vector>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;
    string clear;
    getline(cin, clear);
    while(n--) {
        map<int, vector<string>> w;
        string s;

        getline(cin, s);

        size_t pos = 0;
        while ((pos = s.find(' ')) != string::npos) {
            string word = s.substr(0, pos);
            int len = word.size();
            s.erase(0, pos + 1);

            w[len].push_back(word);
        }
        int len = s.size();
        w[len].push_back(s);

        string c = "";
        for(map<int, vector<string>>::reverse_iterator it = w.rbegin(); it != w.rend(); it++) {
            for(vector<string>::iterator it_v = it->second.begin(); it_v != it->second.end(); it_v++) {
                cout << c << *it_v;
                c = " ";
            }
        }
        cout << endl;
    }
 
    return 0;
}