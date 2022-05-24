#include <iostream>
 
using namespace std;
 
int main() {
    int l;

    while(scanf("%d", &l) != EOF) {
        int m = 0;
        for(int i = 0; i < l; i++) {
            int v;
            cin >> v;
            if(v > m)
                m = v;
        }
        if(m < 10)
            cout << 1 << endl;
        else if(m >= 10 && m < 20)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
 
    return 0;
}