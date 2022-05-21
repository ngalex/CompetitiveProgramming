#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    map<string,int> prod;
    int t, p, n, total;
    string nom;
    cin>>t;
    while(t--){
        cin>>n;
        while(n--){
            cin>>nom>>p;
            prod[nom]=p;
        }
        total=0;
        cin>>n;
        while(n--){
            cin>>nom>>p;
            total+=prod[nom]*p;
        }
        cout<<total<<"\n";
        prod.clear();
    }
    return 0;
}
