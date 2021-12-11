#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    string sign;
    int num_set = 0, min_set = 0, current_set = 0;

    cin >> sign;
    int sets[sign.length()/2+1];

    for(int i = 0; i < sign.length(); i++){
        if(sign[i] == '1') {
            current_set++;
            if(i == sign.length()-1) {
                sets[num_set++] = current_set;
            }
        } else if(sign[i] == '0' && current_set > 0) {
            sets[num_set++] = current_set;
            current_set = 0;
        }
    }
    sort(sets, sets+num_set);
    for(int i = 0; i < num_set-1; i++){
        min_set += sets[i];
    }

    cout << min_set << endl;
 
    return 0;
}