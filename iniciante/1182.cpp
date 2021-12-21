#include <iostream>
 
using namespace std;
 
int main() {
    float m[12][12];
    int l;
    char t;

    cin >> l;
    cin >> t;

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            cin >> m[i][j];

    float sum = 0;
    for(int i = 0; i < 12; i++){
        sum += m[i][l];
    }

    if(t == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum/12);
 
    return 0;
}