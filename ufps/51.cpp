#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,n,price;
    string nom;
    set<pair<string,int>> prod;
    cin>>t;
    while(t--){
        cin>>n;
        while(n--){
            cin>>nom>>price;
            prod.insert({nom,price});
        }
        cout<<prod.begin()->first<< " = " << prod.begin()->second<<"\n";
        cout<<(--prod.end())->first<< " = " << (--prod.end())->second<<"\n";
        prod.clear();
    }
    return 0;
}
