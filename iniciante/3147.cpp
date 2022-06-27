#include <iostream>
 
using namespace std;
 
int main() {
    int H, E, A, O, W, X;

    cin >> H >> E >> A >> O >> W >> X;

    cout << (H+E+A+X >= O+W ? "Middle-earth is safe." : "Sauron has returned.") << endl;
 
    return 0;
}