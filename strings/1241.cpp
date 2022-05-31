#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        string a, b;
        bool isFit = true;

        cin >> a >> b;

        int sa = a.size(), sb = b.size();

        if(sb > sa) {
           isFit = false; 
        } else {
            for(int j = 0, k = sa - sb; j < sb; j++, k++) {
                if(a[k] != b[j]) {
                    isFit = false;
                    break;
                }
            }
        }

        if(isFit) {
            cout << "encaixa" << endl;
        } else {
            cout << "nao encaixa" << endl;
        } 
    }
 
    return 0;
}