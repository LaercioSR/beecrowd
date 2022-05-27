#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    char digit;
    string number;

    cin >> digit >> number;
    while(digit != '0' && number != "0") {
        number.erase(remove(number.begin(), number.end(), digit), number.end());
        while(number[0] == '0')
            number.erase(0, 1);
        if(number != "")
            cout << number << endl;
        else
            cout << 0 << endl;

        cin >> digit >> number;
    }
}