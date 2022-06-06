#include <iostream>
 
using namespace std;
 
int main() {
    int c;

    cin >> c;

    for(int i = 0; i < c; i++) {
        int n, total = 0, avg, aboveAvg = 0;
        float perc;

        cin >> n;

        int st[n];

        for(int j = 0; j < n; j++) {
            cin >> st[j];
            total += st[j];
        }
        avg = (float) total / n;
        for(int j = 0; j < n; j++) {
            if(st[j] > avg) {
                aboveAvg++;
            }
        }
        perc = (float) aboveAvg / n * 100;

        printf("%.3f%%\n", perc);
    }
 
    return 0;
}