#include <iostream>
 
using namespace std;
 
int main() {
    int x, count_a = 0, count_g = 0, count_d = 0;

    cin >> x;
    while(x != 4) {
        if(x == 1)
            count_a++;
        else if(x == 2)
            count_g++;
        else if(x == 3)
            count_d++;

        cin >> x;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << count_a << endl;
    cout << "Gasolina: " << count_g << endl;
    cout << "Diesel: " << count_d << endl;
 
    return 0;
}