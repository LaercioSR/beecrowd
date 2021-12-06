#include <iostream>
 
using namespace std;
 
int main() {
    int x;

    cin >> x;

    for(int i = 0; i < x; i++) {
        string number;
        int leds = 0;

        cin >> number;

        for(int j = 0; j < number.length(); j++) {
            if(number[j] == '0') {
                leds += 6;
            } else if(number[j] == '1') {
                leds += 2;
            } else if(number[j] == '2') {
                leds += 5;
            } else if(number[j] == '3') {
                leds += 5;
            } else if(number[j] == '4') {
                leds += 4;
            } else if(number[j] == '5') {
                leds += 5;
            } else if(number[j] == '6') {
                leds += 6;
            } else if(number[j] == '7') {
                leds += 3;
            } else if(number[j] == '8') {
                leds += 7;
            } else if(number[j] == '9') {
                leds += 6;
            }
        }

        cout << leds << " leds" << endl;
    }
 
    return 0;
}