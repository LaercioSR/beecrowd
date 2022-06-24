#include <iostream>
#include <map>
#include <vector>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n--) {
        int m, c;
        map<int, vector<int>> o;

        cin >> m >> c;

        for(int i = 0; i < c; i++) {
            int v, pos;

            cin >> v;
            pos = v % m;
            o[pos].push_back(v);
        }
        for(int i = 0; i < m; i++) {
            cout << i << " -> ";
            for(vector<int>::iterator it = o[i].begin(); it != o[i].end(); it++) {
                cout << *it << " -> ";
            }
            cout << "\\" << endl;
        }
        if(n > 0)
            cout << endl;
    }
 
    return 0;
}