#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,op;
    cin>>N;
    string sheldon, rajesh;
    while(N){
        cin>>sheldon>>rajesh;
        if(sheldon==rajesh){
            cout<<"Empate"<<"\n";
        }else{
            if(sheldon=="tijera")
                op=(rajesh=="lagarto" || rajesh=="papel")?1:0;
            if(sheldon=="papel")
                op=(rajesh=="piedra" || rajesh=="spock")?1:0;
            if(sheldon=="lagarto")
                op=(rajesh=="papel" || rajesh=="spock")?1:0;
            if(sheldon=="spock")
                op=(rajesh=="piedra" || rajesh=="tijera")?1:0;
            if(sheldon=="piedra")
                op=(rajesh=="tijera" || rajesh=="lagarto")?1:0;

            (op==1)?cout<<"Sheldon"<<"\n":cout<<"Rajesh"<<"\n";
        }
        N--;
    }
    return 0;
}
