#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,T,sum;
    cin>>N;
    while(N){
        cin>>T;
        sum=0;
        for(int i=1; i<T; i++){
            if(T%i==0){
                sum=sum+i;
            }
        }
        if(sum>T || sum<T){
                cout<<T<<" nao eh perfeito"<<"\n";
        }
        if(sum==T){
            cout<<T<<" eh perfeito"<<"\n";
        }
        N--;
    }
    return 0;
}
