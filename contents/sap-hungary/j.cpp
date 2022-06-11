#include <iostream>
#include <map>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;
    while(n != 0) {
        map<int, string> planets;

        for(int i = 0; i < n; i++) {
            string planet;
            int a, t, y;

            cin >> planet >> a >> t;
            y = a - t;

            planets[y] = planet;
        }

        map<int, string>:: iterator itr = planets.begin();
        cout << itr->second << endl;

        cin >> n;
    }
 
    return 0;
}