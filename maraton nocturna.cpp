#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,p,m,MIN,aux3;
    string nom, event;
    vector<pair<int,string>> events, aux2;
    vector<string> aux;
    map<string,set<string>> scoreboard;
    cin>>t;
    while(t--){
        cin>> n>>p>>m;
        while(n--){
            cin >> nom;
            scoreboard[nom] = {};
        }
        while(m--){
            cin>>MIN;
            getline(cin, event);
            events.push_back({MIN,event});
        }
        sort(events.begin(),events.end());
        for(int i = 0; i<events.size();i++){
            istringstream ss(events[i].second);
            do {
                string word;
                ss >> word;
                aux.push_back(word);
            } while (ss);
            if(aux[2] == "ACCEPTED"){
                scoreboard[aux[0]].insert(aux[1]);
                for(map<string,set<string>>::iterator it = scoreboard.begin();it!=scoreboard.end();it++){
                    aux2.push_back({it->second.size(),it->first});
                }
                sort(aux2.begin(),aux2.end(),greater<pair<int,string>>());
                aux3 = aux2[0].first;
                aux.clear();
                for(int i = 0; i<aux2.size() && aux2[i].first == aux3;i++){
                    aux.push_back(aux2[i].second);
                }
                sort(aux.begin(),aux.end());
                cout << aux[0]<<endl;
            }
            aux.clear();
            aux2.clear();
        }
        events.clear();
        scoreboard.clear();
    }
    return 0;
}
