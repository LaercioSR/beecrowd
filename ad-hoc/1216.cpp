#include <iostream>
 
using namespace std;
 
int main() {
    int count = 0, total = 0;
    string name;

    getline(cin, name);
    while (name[0] != '\0') {
        int d;

        cin >> d;

        count++;
        total += d;

        getline(cin, name);     // Clear
        getline(cin, name);
    }

    double m = (double)total/count;

    printf("%.1f\n", m);
 
    return 0;
}