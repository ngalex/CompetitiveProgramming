#include <bits/stdc++.h>
using namespace std;
int main() {
    string hand;
    pair<int, char> maxim;
    map<char, int> cards;
    maxim = {0, 'A'};
    getline(cin,hand);
    istringstream ss(hand);
    do {
        string word;
        ss >> word;
        cards[word[0]]++;
        if(cards[word[0]] > maxim.first) {
            maxim = {cards[word[0]], word[0]};
        }
    } while(ss);

    cout << maxim.first << "\n";
    return 0;
}
