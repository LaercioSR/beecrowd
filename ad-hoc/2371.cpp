#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, m, count = 0;

    cin >> n >> m;

    char arr[n][m];
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int k;

    cin >> k;

    for(int i = 0; i < k; i++) {
        int l, c;

        cin >> l >> c;
        l -= 1;
        c -= 1;

        if (arr[l][c] == '#') {
            arr[l][c] = '*';
        }
    }

    cout << count << endl;

    return 0;
}