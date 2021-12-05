#include <iostream>
 
using namespace std;
 
int main() {
    int x, qtt_mouse = 0, qtt_frog = 0, qtt_rabbit = 0, qtt_total = 0;
    float perc_mouse, perc_frog, perc_rabbit;

    cin >> x;

    for(int i = 0; i < x; i++) {
        int qtt;  // quantity
        char a; // animal

        cin >> qtt >> a;

        qtt_total += qtt;
        if(a == 'R') {
            qtt_mouse += qtt;
        } else if(a == 'S') {
            qtt_frog += qtt;
        } else if(a == 'C') {
            qtt_rabbit += qtt;
        }
    }

    perc_mouse = qtt_mouse / float(qtt_total) * 100;
    perc_frog = qtt_frog / float(qtt_total) * 100;
    perc_rabbit = qtt_rabbit / float(qtt_total) * 100;

    cout << "Total: " << qtt_total << " cobaias" << endl;
    cout << "Total de coelhos: " << qtt_rabbit << endl;
    cout << "Total de ratos: " << qtt_mouse << endl;
    cout << "Total de sapos: " << qtt_frog << endl;
    printf("Percentual de coelhos: %.2f %%\n", perc_rabbit);
    printf("Percentual de ratos: %.2f %%\n", perc_mouse);
    printf("Percentual de sapos: %.2f %%\n", perc_frog);
 
    return 0;
}