#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> players;
    int qqt_teams, qtt_players;

    cin >> qtt_players >> qqt_teams;

    map<string, int> teams[qqt_teams];

    for(int i = 0; i < qtt_players; i++) {
        string name;
        int level;

        cin >> name >> level;

        players[level] = name;
    }


    int i = 0;
    for (auto itr = players.rbegin(); itr != players.rend(); ++itr) {
        int team = i % qqt_teams;
        teams[team][itr->second] = itr->first;
        i++;
    }

    for(int i = 0; i < qqt_teams; i++) {
        cout << "Time " << i+1 << endl;
        for(map<string, int>:: iterator itr = teams[i].begin(); itr != teams[i].end(); itr++) {
            cout << itr->first << endl;
        }
        cout << endl;
    }
}