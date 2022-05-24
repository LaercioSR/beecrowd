#include <iostream>
#include <stack>
#include <cstring>
 
using namespace std;

bool isCorrect(string s) {
    stack<char> parentheses;
    int len = s.length();

    for(int i = 0; i < len; i++) {
        if(s[i] == '(') {
            parentheses.push('(');
        } else if(s[i] == ')') {
            if(parentheses.empty())
                return false;
            parentheses.pop();
        }
    }
    if(parentheses.empty())
        return true;
    return false;
}
 
int main() {
    string s;

    while(getline(cin, s)) {
        bool is_correct = isCorrect(s);
        if(is_correct)
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }
 
    return 0;
}