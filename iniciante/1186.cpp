#include <iostream>
 
using namespace std;
 
int main() {
    float m[12][12];
    char o;

    cin >> o;

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            cin >> m[i][j];

    float sum = 0;
    for(int i = 0; i < 12; i++){
        for(int j = 12-i; j < 12; j++) {
            sum += m[i][j];
        }
    }

    if(o == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum/66);
 
    return 0;
}