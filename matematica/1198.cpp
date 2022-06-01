#include <iostream>
 
using namespace std;
 
int main() {
    long long int h, o;

    while(scanf("%lld %lld", &h, &o) != EOF) {
        if(h > o)
            cout << h - o << endl;
        else
            cout << o - h << endl;
    }
 
    return 0;
}