#include <iostream>

using namespace std;

int main() {
    int t;

    cin >> t;

    for(int i = 1; i <= t; i++) {
        string sheldon, raj, result;

        cin >> sheldon >> raj;

        if(sheldon == "tesoura") {
            if(raj == "papel" || raj == "lagarto") {
                result = "Bazinga!";
            } else if(raj == "pedra" || raj == "Spock") {
                result = "Raj trapaceou!";
            } else {
                result = "De novo!";
            }
        } else if(sheldon == "papel") {
            if(raj == "pedra" || raj == "Spock") {
                result = "Bazinga!";
            } else if(raj == "tesoura" || raj == "lagarto") {
                result = "Raj trapaceou!";
            } else {
                result = "De novo!";
            }
        } else if(sheldon == "pedra") {
            if(raj == "tesoura" || raj == "lagarto") {
                result = "Bazinga!";
            } else if(raj == "papel" || raj == "Spock") {
                result = "Raj trapaceou!";
            } else {
                result = "De novo!";
            }
        } else if(sheldon == "lagarto") {
            if(raj == "papel" || raj == "Spock") {
                result = "Bazinga!";
            } else if(raj == "pedra" || raj == "tesoura") {
                result = "Raj trapaceou!";
            } else {
                result = "De novo!";
            }
        } else if(sheldon == "Spock") {
            if(raj == "pedra" || raj == "tesoura") {
                result = "Bazinga!";
            } else if(raj == "papel" || raj == "lagarto") {
                result = "Raj trapaceou!";
            } else {
                result = "De novo!";
            }
        }

        cout << "Caso #" << i << ": " << result << endl;
    }

    return 0;
}