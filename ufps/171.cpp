#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int P,K,N;
    cin>>P;
    while(P){
        cin>>K>>N;
        N=N+N*(N+1)/2;
        cout<<K<<" "<<N<<"\n";
        P--;
    }
    return 0;
}
