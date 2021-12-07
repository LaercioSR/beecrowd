#include <iostream>
 
using namespace std;
 
int main() {
    int num_valid_grades = 0;
    float grade, total = 0, avg;

    while(num_valid_grades < 2) {
        cin >> grade;
        if(grade >= 0 && grade <= 10) {
            num_valid_grades++;
            total += grade;
        } else {
            cout << "nota invalida" << endl;
        }
    }
    avg = total/2;
    printf("media = %.2f\n", avg);
 
    return 0;
}