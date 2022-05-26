#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n, m;
char arr[100][100];

bool checkBombs(int x, int y) {
    arr[x][y] = 'o';

    if(x-1 >= 0 && arr[x-1][y] == '*') {
        if(!checkBombs(x-1, y)) {
            arr[x][y] = '*';
            return false;
        }
    } else if(x-1 >= 0 && arr[x-1][y] == '#') {
        arr[x][y] = '*';
        return false;
    }
    if(x+1 < n && arr[x+1][y] == '*') {
        if(!checkBombs(x+1, y)) {
            arr[x][y] = '*';
            return false;
        }
    } else if(x+1 < n && arr[x+1][y] == '#') {
        arr[x][y] = '*';
        return false;
    }
    if(y-1 >= 0 && arr[x][y-1] == '*') {
        if(!checkBombs(x, y-1)) {
            arr[x][y] = '*';
            return false;
        }
    } else if(y-1 >= 0 && arr[x][y-1] == '#') {
        arr[x][y] = '*';
        return false;
    }
    if(y+1 < m && arr[x][y+1] == '*') {
        if(!checkBombs(x, y+1)) {
            arr[x][y] = '*';
            return false;
        }
    } else if(y+1 < m && arr[x][y+1] == '#') {
        arr[x][y] = '*';
        return false;
    }
    return true;
}

int main() {
    int count = 0;

    cin >> n >> m;

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

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '*' && checkBombs(i, j)) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}