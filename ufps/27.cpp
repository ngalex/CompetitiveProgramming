#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string cadena;
    int t,cont,i;
    cin>>t;
    while(t--){
        cin>> cadena;
        cont=0;
        for(i=0; i<cadena.size();i++){
            if(cadena[i]=='(') cont++;
            else{
                cont--;
                if(cont<0) break;
            }
        }
        (cont==0)?cout<<"CORRECTO"<<"\n":cout<<"INCORRECTO"<<"\n";
    }
    return 0;
}
