#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,n,m,i,votos;
    vector<pair<string,int>> res;
    string nom;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(i=0;i<n;i++){
            cin>>nom;
            res.push_back({nom,0});
        }
        while(m--){
            for(i=0; i<n;i++){
                cin>>votos;
                res[i].second+=votos;
            }
        }
        i=0;
        m=0;
        while(i<n){
            if(res[m].second<=res[i].second)m=i;
            i++;
        }
        cout<<res[m].first<<"\n";
        res.clear();
    }
    return 0;
}
