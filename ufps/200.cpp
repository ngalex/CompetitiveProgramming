#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    pair<int,int> sifar;
    int T,M;
    while(cin>>T && T>0){
        sifar={++sifar.first,0};
        M=5;
        while(M<=T){
            sifar.second+=T/M;
            M*=5;
        }
        cout<<"Case #"<<sifar.first<<": "<<sifar.second<<"\n";
        N--;
    }
    return 0;
}
