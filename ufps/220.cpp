#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T,N,i,ganadores;
    while(cin>>T && T!=0){
        i=5;
        ganadores=0;
        while(i){
            cin>>N;
            if(N==T){
                ganadores++;
            }
            i--;
        }
        cout<<ganadores<<"\n";

    }

    return 0;
}
