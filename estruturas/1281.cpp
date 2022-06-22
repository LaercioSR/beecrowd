#include <iostream>
#include <map>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;
    while(n--) {
        int m, q;
        string p;
        float v, t = 0;
        map<string, float> map;

        cin >> m;
        while(m--) {
            cin >> p >> v;
            map[p] = v;
        }
        cin >> m;
        while(m--) {
            cin >> p >> q;
            t += q * map[p];
        }

        printf("R$ %.2f\n", t);
    }
 
    return 0;
}