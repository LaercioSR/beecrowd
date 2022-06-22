#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;
    while(n--) {
        int l, total = 0;

        cin >> l;

        for(int i = 0; i < l; i++) {
            string s;

            cin >>  s;

            int len = s.size();

            for(int j = 0; j < len; j++) {
                total += (s[j] - 65) + i + j;
            }
        }

        cout << total << endl;
    }
 
    return 0;
}