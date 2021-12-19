#include <iostream>
 
using namespace std;
 
int main() {
    int odd[5], even[5];
    int count_odd = 0, count_even = 0;
    for(int i = 0; i < 15; i++) {
        int x;

        cin >> x;

        if(x%2 == 0) {
            even[count_even++] = x;
            if(count_even == 5) {
                for(int j = 0; j < 5; j++) {
                    cout << "par[" << j << "] = " << even[j] << endl;
                }
                count_even = 0;
            }
        }
        else {
            odd[count_odd++] = x;
            if(count_odd == 5) {
                for(int j = 0; j < 5; j++) {
                    cout << "impar[" << j << "] = " << odd[j] << endl;
                }
                count_odd = 0;
            }
        }
    }
    for(int j = 0; j < count_odd; j++)
        cout << "impar[" << j << "] = " << odd[j] << endl;
    for(int j = 0; j < count_even; j++)
        cout << "par[" << j << "] = " << even[j] << endl;
 
    return 0;
}