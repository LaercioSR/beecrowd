#include <iostream>
// #include <iomanip>

using namespace std;

int main() {
    int in;

    cin >> in;

    for(int i = 0; i < in; i++) {
        double x, y, z, result;

        cin >> x >> y >> z;

        result = ((x*2) + (y*3) + (z*5))/10;

        // cout << std::setprecision(2) << result << '\n';
        printf("%.1f\n", result);
    }

    return 0;
}