#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n--) {
        string a, b;
        int total = 0, len;

        cin >> a >> b;

        len = a.size();

        for(int i = 0; i < len; i++) {
            int r = b[i] - a[i];
            if(r < 0) {
                r = 'z' - a[i] + b[i] - 96;
            }
            total += r;
        }

        cout << total << endl;
    }
 
    return 0;
}