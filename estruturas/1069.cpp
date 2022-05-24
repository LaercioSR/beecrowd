#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;

    cin >> n;
    for(int i = 0; i < n; i++) {
        string in;
        stack<char> d;
        int count_d = 0;

        cin >> in;
        int len_in = in.length();
        for(int j = 0; j < len_in; j++) {
            if(in[j] == '<') {
                d.push('<');
            } else if(in[j] == '>') {
                if(!d.empty()) {
                    d.pop();
                    count_d++;
                }
            }
        }

        cout << count_d << endl;
    }

    return 0;
}