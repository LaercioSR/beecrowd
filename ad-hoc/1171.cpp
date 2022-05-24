#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    map<int, int> m;

    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(m.find(x) == m.end())
            m[x] = 1;
        else
            m[x]++;
    }

    for(map<int, int>:: iterator itr = m.begin(); itr != m.end(); itr++) {
        cout << itr->first << " aparece " << itr->second << " vez(es)" << endl;
    }

    return 0;
}