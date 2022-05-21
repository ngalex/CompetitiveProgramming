#include <bits/stdc++.h>
using namespace std;
int main(){
    int T,N;
    string status;
    pair<int,int> jugadores;
    cin>>T;
    while(T){
        cin>>N;
        jugadores={0,0};
        while(N){
                cin>> status;
                if(status=="ALICE")jugadores.first=jugadores.first+2;
                if(status=="BOB")jugadores.second=jugadores.second+2;
                if(status=="EMPATE"){
                    ++jugadores.first;
                    ++jugadores.second;
                }
            N--;
        }
        if(jugadores.first==jugadores.second){
            cout<<"EMPATE"<<"\n";
        }else{
            (jugadores.first>jugadores.second)?cout<<"ALICE"<<"\n":cout<<"BOB"<<"\n";
        }
        T--;
    }
    return 0;
}
