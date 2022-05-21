#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    pair<int,int> resultado;
    cin>>N;
    while(N){
        cin>>resultado.first>>resultado.second;
        if(resultado.first==resultado.second){
                cout<<"casi ganamos"<<"\n";
        }else{
            (resultado.first>resultado.second)?cout<<"perdimos"<<"\n":cout<<"ganamos"<<"\n";
        }
        N--;
    }
    return 0;
}

