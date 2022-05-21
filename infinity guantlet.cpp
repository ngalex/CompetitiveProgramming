#include <bits/stdc++.h>

using namespace std;

int main() {
    int m;
    string color;
    cin>>m;
    vector<pair<string,string>> gems = { {"purple", "Power"}, {"green", "Time"},
    {"blue", "Space"}, {"orange", "Soul"}, {"red", "Reality"}, {"yellow", "Mind"} };
    while(m--) {
        cin>>color;

        for(int i = 0; i < gems.size(); i++) {
            if(gems[i].first == color) {gems.erase(gems.begin()+i); break;}
        }
    }
    cout << gems.size() << endl;
    for(auto &x: gems) cout << x.second + "\n";
}
