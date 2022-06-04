#include <iostream>
 
using namespace std;
 
int main() {
    int h, m;

    while(scanf("%d %d", &h, &m) != EOF) {
        int hh = h / 30;
        int mm = m / 6;

        if(hh < 10)
            cout << "0";
        cout << hh << ":";
        if(mm < 10)
            cout << "0";
        cout << mm << endl;
    }
 
    return 0;
}