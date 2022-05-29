#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int nc;

    cin >> nc;
    
    for(int i = 1; i <= nc; i++) {
        int n, m;
        vector<int> p; 

        cin >> n >> m;

        for(int j = 1; j <= n; j++) {
            p.push_back(j);
        }

        int pos = 0;
        while(p.size() > 1) {
            pos += (m-1);
            while(pos >= p.size())
                pos -= p.size();
            p.erase(p.begin()+pos);
        }

        cout << "Case " << i << ": " << p[0] << endl;
    }
 
    return 0;
}