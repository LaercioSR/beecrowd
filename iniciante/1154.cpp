#include <iostream>
 
using namespace std;
 
int main() {
    int age, total = 0, count = 0;

    cin >> age;
    while(age >= 0) {
        count++;
        total += age;
        cin >> age;
    }
    printf("%.2f\n", total/(float)count);
 
    return 0;
}