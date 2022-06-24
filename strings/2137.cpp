#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;

    while(scanf("%d", &n) != EOF) {
        vector<string> b;

        for(int i = 0; i < n; i++) {
            string bi;
            cin >> bi;
            b.push_back(bi);
        }
        sort(b.begin(), b.end());
        for(vector<string>::iterator it = b.begin(); it != b.end(); it++) {
            cout << *it << endl;
        }
    }
 
    return 0;
}