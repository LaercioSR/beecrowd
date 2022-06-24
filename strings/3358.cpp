#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n--) {
        string ln;
        bool isEasy = true;
        int qttC = 0;
        char v[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        cin >> ln;

        int len = ln.size();

        for(int i = 0; i < len; i++) {
            if(find(begin(v), end(v), ln[i]) == end(v)) {
                qttC++;
            } else {
                qttC = 0;
            }
            if(qttC == 3) {
                isEasy = false;
                break;
            }
        }

        cout << ln << (isEasy ? "" : " nao") << " eh facil" << endl;
    }
 
    return 0;
}