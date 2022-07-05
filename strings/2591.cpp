#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n--) {
        string s;
        int a = 0, b = 0;
        bool hasFindK = false;

        cin >> s;

        for(int i = 0, len = s.size(); i < len; i++) {
            if(s[i] == 'a') {
                if(hasFindK)
                    b++;
                else
                    a++;
            } else if(s[i] == 'k') {
                hasFindK = true;
            }
        }

        cout << "k";
        for(int i = 0; i < a*b; i++)
            cout << "a";
        cout << endl;
    }
 
    return 0;
}