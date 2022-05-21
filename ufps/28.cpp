#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,n,m,cont;
    bool flag;
    cin>>t;
    while(t--){
        cin>>n;
        cont=0;
        flag=0;
        while(n--){
            cin>>m;
            (m==1)?++cont:--cont;
            if(cont<0)flag=1;
        }
        (cont==0 && !flag)?cout<<"CORRECTO"<<"\n":cout<<"INCORRECTO"<<"\n";
    }
    return 0;
}
