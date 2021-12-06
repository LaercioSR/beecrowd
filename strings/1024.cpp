#include <iostream>
 
using namespace std;
 
int main() {
    int x;
    cin >> x;

    // Clear input
    string clear;
    getline(cin, clear);
    for(int i = 0; i < x; i++) {
        string msg;

        getline(cin, msg);
        int msg_len = msg.length();

        for(int j = 0; j < msg_len; j++) {
            int num = int(msg[j]);

            if((num >= 65 && num <= 90) || (num >= 97 && num <= 122)) {
                msg[j] = char(num+3);
            }
        }
        for(int j = 0; j < msg_len/2; j++) {
            char temp = msg[j];

            msg[j] = msg[msg_len-1-j];
            msg[msg_len-1-j] = temp;
        }
        for(int j = msg_len/2; j < msg_len; j++) {
            msg[j] = char(int(msg[j])-1);
        }
        cout << msg << endl;
    }
 
    return 0;
}