#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,T,K,M,aux;
    cin>>N;
    while(N){
        cin>> T>>K;
        aux =0;
        while(T){
            cin>>M;
            if(M>aux){
                aux = M;
            }
            T--;
        }
        cout<<aux+K<<"\n";
        N--;
    }
    return 0;
}
