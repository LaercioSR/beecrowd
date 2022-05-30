#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n != 0) {
        vector<int> deck;
        for(int i = n; i > 0; i--) {
            deck.insert(deck.begin(), i);
        }

        cout << "Discarded cards: ";
        for(int i = 0; i < n-1; i++) {
            int top = deck[0];
            deck.erase(deck.begin());
            int newTop = deck[0];
            deck.erase(deck.begin());
            deck.push_back(newTop);
            if(i != 0)
                cout << ", ";
            cout << top;
        }
        cout << endl;

        cout << "Remaining card: " << deck[0] << endl;
        cin >> n;
    }
 
    return 0;
}