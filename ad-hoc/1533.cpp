#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;
    while(n) {
        int first = 0, iFirst = 1, second, iSecond;

        for(int i = 0; i < n; i++) {
            int v;

            cin >> v;

            if(v > first) {
                second = first;
                iSecond = iFirst;
                first = v;
                iFirst = i+1;
            } else if(v > second) {
                second = v;
                iSecond = i+1;
            }
        }

        cout << iSecond << endl;

        cin >> n;
    }
 
    return 0;
}