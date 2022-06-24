#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n--) {
        int k;
        bool sameL = true;
        string firstL = "", l;

        cin >> k;

        while(k--) {
            cin >> l;

            if(firstL == "")
                firstL = l;
            else if(l != firstL)
                sameL = false;
        }

        cout << (sameL ? firstL : "ingles") << endl;
    }
 
    return 0;
}