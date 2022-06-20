#include <iostream>
 
using namespace std;
 
int main() {
    unsigned int m, n, o;

    cin >> m >> n;
    while(m != 0 && n != 0) {
        o = m + n;
        string so = to_string(o);
        int len = so.size();

        for(int i = 0; i < len; i++) {
            if(so[i] != '0')
                cout << so[i];
        }
        cout << endl;

        cin >> m >> n;
    }
 
    return 0;
}