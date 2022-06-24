#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n != 0) {
        string s[n], si;
        int max = 0;

        for(int i = 0; i < n; i++) {
            cin >> si;

            max = si.size() > max ? si.size() : max;
            s[i] = si;
        }
        for(int i = 0; i < n; i++) {
            int len = s[i].size();
            for(int j = 0; j < max-len; j++) {
                cout << " ";
            }
            for(int j = 0; j < len; j++) {
                cout << s[i][j];
            }
            cout << endl;
        }

        cin >> n;
        if(n != 0)
            cout << endl;
    }
 
    return 0;
}