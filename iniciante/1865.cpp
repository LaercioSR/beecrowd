#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string name;
        int force;

        cin >> name >> force;

        if(name == "Thor")
            cout << 'Y' << endl;
        else
            cout << 'N' << endl;
    }
 
    return 0;
}