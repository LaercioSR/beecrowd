#include <iostream>
#include <string.h>
 
using namespace std;
 
int main() {
    char a[100], b[100];

    cin.getline(a, 100);
    cin.getline(b, 100);
    while(a[0] != '\0' && b[0] != '\0') {
        int lenA = strlen(a), lenB = strlen(b), total = 0;

        for(int i = 0; i < lenA; i++) {
            int subTotal = 0, pos = i;
            for(int j = 0; j < lenB; j++) {
                if(a[pos] == b[j]) {
                    subTotal++;
                    if(subTotal > total) {
                        total = subTotal;
                    }
                    pos++;
                } else {
                    subTotal = 0;
                    pos = i;
                }
            }
        }

        cout << total << endl;

        cin.getline(a, 100);
        cin.getline(b, 100);
    }
 
    return 0;
}