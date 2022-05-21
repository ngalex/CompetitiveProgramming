#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,T,puntos;
    pair<int,int> partido;
    cin>>N;
    while(N){
        cin>>T;
        puntos=0;
        while(T){
            cin>>partido.first>>partido.second;
            if(partido.first==partido.second)puntos++;
            if(partido.first>partido.second)puntos+=3;
            cout<<puntos<<"\n";
            T--;
        }
        N--;
    }
    return 0;
}
