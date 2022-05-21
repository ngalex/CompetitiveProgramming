#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    pair<int,int> operacion;
    int N,T,i;
    double total;
    pair<int,int> maximo;
    deque<int> heroes;
    cin>>N>>operacion.first>>operacion.second;
    maximo={1,0};
    i=0;
    total=0;
    while(i<N){
        cin>>T;
        if(T>maximo.first){
            maximo.first=T;
            maximo.second=1;
        }else{
            maximo.second++;
        }
        heroes.push_back(T);
        total+=T;
        i++;
    }
    sort(heroes.begin(),heroes.end());
    //menores <= operaciones
    if(N-maximo.second<=operacion.second){
        for(i=0; i<N-maximo.second;i++){
            total-=heroes[i];
        }
        cout<<"aqui: "<<total<<endl;
        operacion.second-=N-maximo.second;
        N-=maximo.second;
        total+=(operacion.second/operacion.first)*operacion.first;
        total=total/N;
        cout<<total<<"\n";
    }else{
        for(i=0; i<operacion.second;i++){
            total-=heroes[i];
        }
        cout<<total<<"\n";

    }


    return 0;
}
