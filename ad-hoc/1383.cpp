#include <iostream>
 
using namespace std;

void getPositions(int orientation, int position, int x[9], int y[9]) {
    if(orientation == 0) {
        for(int i = 0; i < 9; i++) {
            x[i] = position;
            y[i] = i;
        }
    } else if(orientation == 1) {
        for(int i = 0; i < 9; i++) {
            x[i] = i;
            y[i] = position;
        }
    } else if(orientation == 2) {
        for(int i = 0; i < 9; i++) {
            x[i] = (i/3) + ((position/3)*3);
            y[i] = (i%3) + ((position*3)%9);
        }
    }
}

bool findNumber(int s[9][9], int n, int x[9], int y[9]) {
    for(int i = 0; i < 9; i++) {
        if(n == s[x[i]][y[i]]) {
            return true;
        }
    }
    return false;
}

bool check(int s[9][9], int orientation) {
    for(int i = 0; i < 9; i++) {
        int x[9], y[9];
        getPositions(orientation, i, x, y);

        for(int j = 1; j <= 9; j++) {
            if(!findNumber(s, j, x, y))
                return false;
        }
    }
    return true;
}

bool isCorrect(int s[9][9]) {
    // Check Line
    if(!check(s, 0))
        return false;
    // Check Column
    if(!check(s, 1))
        return false;
    // Check Block
    if(!check(s, 2))
        return false;
    return true;
}
 
int main() {
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        int sudoku[9][9];

        for(int j = 0; j < 9; j++) {
            for(int k = 0; k < 9; k++) {
                cin >> sudoku[j][k];
            }
        }

        printf("Instancia %d\n", i);
        if(isCorrect(sudoku))
            printf("SIM\n\n");
        else
            printf("NAO\n\n");
    }
 
    return 0;
}