#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,aux;
    pair<int,int> n = {0,1};
    cout<<n.first<<"\n"<<n.second<<"\n";
    cin>>t;
    while(--t){
        aux=n.first+n.second;
        cout<<aux<<"\n";
        n.first=n.second;
        n.second=aux;
    }
    return 0;
}
