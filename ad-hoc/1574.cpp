#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int t;
    string clear;

    cin >> t;

    while(t--) {
        int n, p = 0;

        cin >> n;

        int r[n];

        getline(cin, clear);
        for(int i = 0; i < n; i++) {
            string ins;
            getline(cin, ins);

            if(ins == "LEFT") {
                r[i] = -1;
            } else if(ins == "RIGHT") {
                r[i] = 1;
            } else {
                ins.erase(0, 8);
                int pos = stoi(ins)-1;
                r[i] = r[pos];
            }

            p += r[i];
        }

        cout << p << endl;
    }
 
    return 0;
}