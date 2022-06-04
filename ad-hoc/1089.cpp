#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n != 0) {
        int qtt = 0, h[n];
        bool isUp;

        for(int i = 0; i < n; i++) {
            cin >> h[i];
        }
        for(int i = 0; i < n; i++) {
            if(i == 0) {
                if(h[i] > h[n-1]) {
                    isUp = true;
                } else {
                    isUp = false;
                }
            } else {
                if(isUp) {
                    if(h[i] < h[i-1]) {
                        qtt++;
                        isUp = false;
                    }
                } else {
                    if(h[i] > h[i-1]) {
                        qtt++;
                        isUp = true;
                    }
                }
            }
            if(i == n-1) {
                if(isUp) {
                    if(h[0] < h[i]) {
                        qtt++;
                    }
                } else {
                    if(h[0] > h[i]) {
                        qtt++;
                    }
                }
            }
        }

        cout << qtt << endl;
        cin >> n;
    }
 
    return 0;
}