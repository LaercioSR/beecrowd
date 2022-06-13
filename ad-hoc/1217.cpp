#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, tKg = 0;
    double tP = 0, avgP, avgKg;
    string clear;

    cin >> n;
    for(int i = 1; i <= n; i++) {
        double v;
        string f;
        int tF;

        cin >> v;
        getline(cin, clear);
        getline(cin, f);

        tF = count(f.begin(), f.end(), ' ') + 1;
        tP += v;
        tKg += tF;

        printf("day %d: %d kg\n", i, tF);
    }
    avgKg = (float)tKg / n;
    avgP = tP / n;

    printf("%.2lf kg by day\n", avgKg);
    printf("R$ %.2lf by day\n", avgP);
 
    return 0;
}