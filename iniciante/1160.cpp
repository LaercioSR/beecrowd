#include <iostream>
 
using namespace std;
 
int main() {
    int t;

    cin >> t;

    for(int i = 0; i < t; i++) {
        int pa, pb, years = 0;
        float ga, gb;

        cin >> pa >> pb >> ga >> gb;
        while (pa <= pb) {
            years++;
            if(years > 100)
                break;
            pa += (ga/100)*pa;
            pb += (gb/100)*pb;
        }
        if(years > 100)
            cout << "Mais de 1 seculo." << endl;
        else
            cout << years << " anos." << endl;
            
    }
 
    return 0;
}