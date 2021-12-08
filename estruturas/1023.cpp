#include <iostream>
 
using namespace std;
 
int main() {
    int n, num_city = 0;

    cin >> n;

    while (n != 0) {
        if(num_city != 0) {
            cout << endl;
        }
        int properties[n][2], total_res = 0, total_con = 0, count_array = 0;
        double avg_con;

        cout << "Cidade# " << ++num_city << ":" << endl;

        for(int i = 0; i < n; i++) {
            int x, y;

            cin >> x >> y;

            total_res += x;
            total_con += y;
            int avg_con_res = y/x;
            bool has_inset = false;
            for(int j = 0; j < count_array; j++) {
                if(properties[j][0] == avg_con_res) {
                    properties[j][1] += x;
                    has_inset = true;
                    break;
                } else if(properties[j][0] > avg_con_res) {
                    for(int k = count_array; k > j; k--) {
                        properties[k][0] = properties[k-1][0];
                        properties[k][1] = properties[k-1][1];
                    }
                    properties[j][0] = avg_con_res;
                    properties[j][1] = x;
                    has_inset = true;
                    count_array++;
                    break;
                }
            }
            if(!has_inset) {
                properties[count_array][0] = avg_con_res;
                properties[count_array][1] = x;
                count_array++;
            }
        }
        for(int i = 0; i < count_array; i++) {
            if(((i+1) % count_array) == 0) {
                cout << properties[i][1] << "-" << properties[i][0] << endl;
            } else {
                cout << properties[i][1] << "-" << properties[i][0] << " ";
            }
        }
        avg_con = total_con/float(total_res);
        printf("Consumo medio: %.2lf m3.\n", (int)(avg_con*100)/100.0);
        
        cin >> n;
    }
    
 
    return 0;
}