#include <iostream>
 
using namespace std;
 
int main() {
    int n, m;

    while (scanf("%d %d", &n, &m) != EOF) {
        int count = 0;
        for(int i = n; i <= m; i++) {
            count++;
            string s = to_string(i);
            int len = s.size(), d[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

            for(int j = 0; j < len; j++) {
                d[s[j]-'0']++;
            }
            for(int j = 0; j < 10; j++) {
                if(d[j] > 1) {
                    count--;
                    break;
                }
            }
        }

        cout << count << endl;
    }
 
    return 0;
}