#include <iostream>
 
using namespace std;

int main() {
    int n;

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string number;

        cin >> number;

        int s = number.size();

        if(s == 3) {
            int w1 = 0;
            string one = "one";
            for(int j = 0; j < 3; j++) {
                if(number[j] == one[j])
                    w1++;
            }
            if(w1 >= 2)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        } else if(s == 5) {
            cout << 3 << endl;
        }
    }
 
    return 0;
}