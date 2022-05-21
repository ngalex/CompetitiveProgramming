#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string cadena;
    int t,cont,i;
    while(cin>> cadena){
        cont=0;
        for(i=0; i<cadena.size();i++){
            if(cadena[i]=='+') cont++;
            else{
                cont--;
                if(cont<0) break;
            }
        }
        (cont==0)?cout<<"Registro correcto"<<"\n":cout<<"Registro incorrecto"<<"\n";
    }
    return 0;
}
