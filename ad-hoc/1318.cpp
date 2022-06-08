#include <iostream>
 
using namespace std;
 
int main() {
    int n, m;

    cin >> n >> m;

    while(n != 0 && m != 0) {
        int tickets[n], d = 0;

        for(int i = 0; i < n; i++) {
            tickets[i] = 0;
        }
        for(int i = 0; i < m; i++) {
            int p;

            cin >> p;

            tickets[p-1]++;
        }
        for(int i = 0; i < n; i++) {
            if(tickets[i] > 1)
                d++;
        }
        cout << d << endl;

        cin >> n >> m;
    }
 
    return 0;
}