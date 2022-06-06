#include <iostream>
 
using namespace std;

struct boot {
    int size;
    char side;
    bool complete = false;
};

 
int main() {
    int n;

    while(scanf("%i", &n) != EOF) {
        int count = 0;
        boot boots[n];
        
        for(int i = 0; i < n; i++) {
            int m;
            char l;

            cin >> m >> l;

            boots[i].side = l;
            boots[i].size = m;
        }
        for(int i = 0; i < n; i++) {
            if(boots[i].complete)
                continue;
            char toFound = boots[i].side == 'D' ? 'E' : 'D';
            for(int j = i+1; j < n; j++) {
                if(boots[i].size == boots[j].size && boots[j].side == toFound && !boots[j].complete) {
                    boots[j].complete = true;
                    count++;
                    break;
                }
            }
        }
        cout << count << endl;
    }
 
    return 0;
}