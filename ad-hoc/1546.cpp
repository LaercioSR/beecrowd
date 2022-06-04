#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    string members[4] = {"Rolien", "Naej", "Elehcim", "Odranoel"};

    cin >> n;

    for(int i = 0; i < n; i++) {
        int k;

        cin >> k;
        for(int j = 0; j < k; j++) {
            int f;

            cin >> f;

            cout << members[f-1] << endl;
        }
    }
 
    return 0;
}