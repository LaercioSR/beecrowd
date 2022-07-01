#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int a, b;

    while (cin >> a >> b && (a || b)) {
        int count = 0, c = 0;
        string sa = to_string(a), sb = to_string(b);

        for(int i = sa.size()-1, j = sb.size()-1; i >= 0 || j >= 0; i--, j--) {
            int ai = i >= 0 ? stoi(sa.substr(i, 1)) : 0;
            int bi = j >= 0 ? stoi(sb.substr(j, 1)) : 0;
            int r = ai + bi + c;

            printf("%d + %d + %d = %d\n", ai, bi, c, r);

            if(r >= 10) {
                c = r/10;
                count++;
            } else {
                c = r/10;
            }
        }

        if(count == 0)
            cout << "No carry operation." << endl;
        else if(count == 1)
            cout << "1 carry operation." << endl;
        else
            cout << count << " carry operations." << endl;
    }
    
 
    return 0;
}