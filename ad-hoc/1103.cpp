#include <iostream>
 
using namespace std;
 
int main() {
    int h1, m1, h2, m2;

    cin >> h1 >> m1 >> h2 >> m2;

    while(h1 || m1 || h2 || m2) {
        int total = 0;
        int start = h1 * 60 + m1;
        int end = h2 * 60 + m2;

        if(h1 > h2 || h1 == h2 && m1 >= m2) {
            end += 24 * 60;
        }
        total = end - start;

        printf("%d\n",total);

        cin >> h1 >> m1 >> h2 >> m2;
    }

    return 0;
}