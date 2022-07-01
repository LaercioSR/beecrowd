#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string d, s;
    while(getline(cin, d)) {
        getline(cin, s);

        cout << (d.find(s) != string::npos ? "Resistente" : "Nao resistente") << endl;
    }
 
    return 0;
}