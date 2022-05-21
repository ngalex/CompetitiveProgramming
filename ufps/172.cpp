#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,total,i;
    pair<int,int> caso;
    cin>>N;
    while(N){
        cin>>i>>caso.first>>caso.second;
        total=0;
        while(caso.second>0){
            total+=(caso.second%caso.first)*(caso.second%caso.first);
            caso.second=caso.second/caso.first;
        }
        cout<<i<<" "<<total<<"\n";
        N--;
        }

    return 0;
}
