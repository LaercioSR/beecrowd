#include <iostream>
 
using namespace std;
 
int main() {
    int new_game = 1, wins_inter = 0, wins_gremio = 0, draws = 0, matches = 0;
    while(new_game != 2) {
        int goals_inter, goals_gremio;

        cin >> goals_inter >> goals_gremio;

        matches++;
        if(goals_inter > goals_gremio) {
            wins_inter++;
        } else if(goals_gremio > goals_inter) {
            wins_gremio++;
        } else {
            draws++;
        }

        do {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> new_game;
        } while(new_game != 1 and new_game != 2);
    }
    cout << matches << " grenais" << endl;
    cout << "Inter:" << wins_inter << endl;
    cout << "Gremio:" << wins_gremio << endl;
    cout << "Empates:" << draws << endl;
    if(wins_inter > wins_gremio)
        cout << "Inter venceu mais" << endl;
    else if(wins_gremio > wins_inter)
        cout << "Grêmio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;
 
    return 0;
}