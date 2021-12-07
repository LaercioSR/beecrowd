#include <iostream>
 
using namespace std;
 
int main() {
    int new_calculation = 1;
    while(new_calculation != 2) {
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

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> new_calculation;
        } while(new_calculation != 1 and new_calculation != 2);
    }
 
    return 0;
}