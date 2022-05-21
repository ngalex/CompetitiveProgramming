#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    pair<int,int>votos;
    cin>>N;
    while(N){
        cin>>votos.first>>votos.second;
        (votos.first>=votos.second)?cout<<"Pekerman se queda :)"<<"\n":cout<<"Pekerman se va :("<<"\n";
        N--;
    }
    return 0;
}
