#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int a, b;

    cin >> a >> b;
    while(a != 0 && b != 0) {
        int n, dx = 0, dy = 0;
        vector<int> x, y;

        for(int i = 0; i < a; i++) {
            cin >> n;
            if(x.empty() || n != x.back()) {
                x.push_back(n);
            }
        }
        for(int i = 0; i < b; i++) {
            cin >> n;
            if(y.empty() || n != y.back())
                y.push_back(n);
        }
        vector<int>::iterator itx = x.begin();
        vector<int>::iterator ity = y.begin();
        for(; itx != x.end(); itx++) {
            bool hasEqual = false;
            for(; ity != y.end(); ity++) {
                if(*itx < *ity){
                    break;
                }else if(*itx == *ity) {
                    hasEqual = true;
                    break;
                }
            }
            if(!hasEqual) {
                dx++;
            }
        }
        itx = x.begin();
        ity = y.begin();
        for(vector<int>::iterator ity = y.begin(); ity != y.end(); ity++) {
            bool hasEqual = false;
            for(vector<int>::iterator itx = x.begin(); itx != x.end(); itx++) {
                if(*itx == *ity) {
                    hasEqual = true;
                    break;
                }
            }
            if(!hasEqual) {
                dy++;
            }
        }

        cout << (dx < dy ? dx : dy) << endl;

        cin >> a >> b;
    }
 
    return 0;
}