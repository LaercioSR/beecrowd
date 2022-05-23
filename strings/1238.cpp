#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;
    for(int i = 0; i < n; i++) {
        string s1, s2, s3 = "";
        int len_s1, len_s2, i_s1 = 0, i_s2 = 0;

        cin >> s1 >> s2;
        len_s1 = s1.length();
        len_s2 = s2.length();
        while(i_s1 < len_s1 || i_s2 < len_s2) {
            if(i_s1 < len_s1)
                s3 += s1[i_s1++];
            if(i_s2 < len_s2)
                s3 += s2[i_s2++];
        }
        cout << s3 << endl;
    }
}