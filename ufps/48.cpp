#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,n,m;
    set<int> amanecer;
    cin>>t;
    while(t--){
        cin>>n;
        while(n--){
            cin>>m;
            amanecer.insert(m);
        }
        cout<<"Horas diferentes: "<<amanecer.size()<<"\n";
        cout<<"Temprano: "<<*(amanecer.begin()++)/60<<":"<<*(amanecer.begin()++)%60<<"\n";
        cout<<"Tarde: "<<*(--amanecer.end())/60<<":"<<*(--amanecer.end())%60<<"\n";
        amanecer.clear();
    }
    return 0;
}
