#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int B,H,K,N,dias;
    cin>>B;
    while(B){
        cin>>H>>K>>N;
        //dias=0;
        dias=N/abs(N-K);
        while((abs(N-K)*dias+K)>N){
            dias--;
        }
        cout<<dias<<"\n";
        B--;
    }
    return 0;
}
