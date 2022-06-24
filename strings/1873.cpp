#include <iostream>

using namespace std;

int main() {
    int c;

    cin >> c;

    while(c--) {
        string sheldon, rajesh, result;

        cin >> rajesh >> sheldon;

        if(sheldon == "tesoura") {
            if(rajesh == "papel" || rajesh == "lagarto") {
                result = "sheldon";
            } else if(rajesh == "pedra" || rajesh == "spock") {
                result = "rajesh";
            } else {
                result = "empate";
            }
        } else if(sheldon == "papel") {
            if(rajesh == "pedra" || rajesh == "spock") {
                result = "sheldon";
            } else if(rajesh == "tesoura" || rajesh == "lagarto") {
                result = "rajesh";
            } else {
                result = "empate";
            }
        } else if(sheldon == "pedra") {
            if(rajesh == "tesoura" || rajesh == "lagarto") {
                result = "sheldon";
            } else if(rajesh == "papel" || rajesh == "spock") {
                result = "rajesh";
            } else {
                result = "empate";
            }
        } else if(sheldon == "lagarto") {
            if(rajesh == "papel" || rajesh == "spock") {
                result = "sheldon";
            } else if(rajesh == "pedra" || rajesh == "tesoura") {
                result = "rajesh";
            } else {
                result = "empate";
            }
        } else if(sheldon == "spock") {
            if(rajesh == "pedra" || rajesh == "tesoura") {
                result = "sheldon";
            } else if(rajesh == "papel" || rajesh == "lagarto") {
                result = "rajesh";
            } else {
                result = "empate";
            }
        }

        cout << result << endl;
    }

    return 0;
}