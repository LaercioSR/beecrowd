#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, q, count = 0;

    cin >> n >> q;
    while(n != 0 or q != 0) {
        int marble[n], queries[q];

        cout << "CASE# " << ++count << ":" << endl;

        for(int i = 0; i < n; i++){
            cin >> marble[i];
        }
        sort(marble, marble + n);

        for(int i = 0; i < q; i++){
            int query;
            bool found = false;

            cin >> query;

            for(int j = 0; j < n; j++) {
                if(marble[j] == query) {
                    cout << query << " found at " << j+1 << endl;
                    found = true;
                    break;
                }
            }
            if(!found) {
                cout << query << " not found" << endl;
            }
        }

        cin >> n >> q;
    }
 
    return 0;
}