#include <iostream>
#include <stack>
 
using namespace std;
 
int main() {
    string in;
    int len;
    stack<char> l;

    cin >> in;
    len = in.size();

    for(int i = 0; i < len; i++) {
        if(i%2 != 0) {
            cout << in[i];
        } else {
            l.push(in[i]);
        }
    }

    while(!l.empty()) {
        cout << l.top();
        l.pop();
    }
    cout << endl;
 
    return 0;
}