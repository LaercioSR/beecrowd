#include <iostream>
 
using namespace std;
 
int main() {
    double m[12][12];
    char o;

    cin >> o;

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12;  j++)
            cin >> m[i][j];

    double sum = 0;
    for(int i = 11; i >=0; i--){
        for(int j = 11; j > i && j != 11-i; j--) {
            sum += m[i][j];
        }
    }

    if(o == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum/30);
 
    return 0;
}