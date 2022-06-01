#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    // Clear input
    string clear;
    getline(cin, clear);
    for(int i = 0; i < n; i++) {
        string msg;
        int len;
        bool isLastSpace = 1;

        getline(cin, msg);
        len = msg.size();

        for(int j = 0; j < len; j++) {
            if(msg[j] != ' ' && isLastSpace) {
                cout << msg[j];
                isLastSpace = 0;
            } else if(msg[j] == ' ' && !isLastSpace) {
                isLastSpace = 1;
            }
        }
        cout << endl;
    }
 
    return 0;
}