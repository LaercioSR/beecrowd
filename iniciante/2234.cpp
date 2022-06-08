#include <iostream>
 
using namespace std;
 
int main() {
    int h, p;
    double result;

    cin >> h >> p;

    result = (float) h / p;

    printf("%.2f\n", result);
 
    return 0;
}