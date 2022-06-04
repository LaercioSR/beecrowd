#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n != 0) {
        int pa = 0, pb = 0;

        for(int i = 0; i < n; i++) {
            int a, b;

            cin >> a >> b;

            if(a > b) {
                pa++;
            } else if(b > a) {
                pb++;
            }
        }

        cout << pa << " " << pb << endl;

        cin >> n;
    }
 
    return 0;
}