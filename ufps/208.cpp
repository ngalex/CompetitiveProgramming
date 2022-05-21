#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,T, carta;
    vector<int> cartas;
    pair<int,int> total;
    cin>>N;
    while(N){
        cin>>T;
        while(T){
            cin>>carta;
            cartas.push_back(carta);
            (cartas.size()<T)?total.first+=carta:total.second+=carta;
            T--;
        }
        if(total.first<total.second){
            cout<<"Orden original ";
            for(int i=0;i!=cartas.size();i++){
                (i==cartas.size()-1)?cout<<cartas[i]<<"\n":cout<<cartas[i]<<" ";
            }
        }else{
            cout<<"Orden invertido ";
            for(int i=cartas.size()-1;i!=-1;i--){
                (i==0)?cout<<cartas[i]<<"\n":cout<<cartas[i]<<" ";
            }
        }
        total={0,0};
        cartas.clear();
        N--;
    }
    return 0;
}
