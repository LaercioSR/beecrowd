#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n--) {
        int m, pi, r = 0;
        vector<int> p, newP;

        cin >> m;

        for(int i = 0; i < m; i++) {
            cin >> pi;
            p.push_back(pi);
        }

        newP = p;
        sort(newP.begin(), newP.end(), greater<>());

        vector<int>::iterator itP = p.begin();
        vector<int>::iterator itNewP = newP.begin();
        for(; itP != p.end(); itP++, itNewP++) {
            cout << *itP << " " << *itNewP << endl;
            if(*itP == *itNewP) {
                r++;
            }
        }

        cout << r << endl;
    }
 
    return 0;
}