#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
    int N,i,nota,compas;
    vector<int> notas;
    pair<int,int> paridad;
    pair<int,int> pares;
    cin>>N;
    while(N){
        cin>>nota;
        notas.push_back(nota);
        N--;
    }
    i = 0;
    compas=1;
    pares={-1,-1};
    while(i<notas.size()){
        (notas[i]%2==0)?paridad.first++:paridad.second++;
        i++;
    }
    while(notas.size()>1 && abs(paridad.first-paridad.second)>0){
        if(paridad.first>paridad.second){
                i=0;
                while(pares.first<0){
                    (notas[i]%2==0)?pares.first=i:i++;
                }
                i++;
                while(pares.second<0){
                    (notas[i]%2==0)?pares.second=i:i++;
                }
                compas=+abs(notas[pares.second]-notas[pares.first])/2;
                notas[pares.first]=+abs(notas[pares.second]-notas[pares.first])/2;
                notas.erase(notas.begin()+pares.second);
                pares={-1,-1};
                paridad.first--;
                cout<<"compas ahora: "<<compas<<endl;
        }else{

        }
    }


    return 0;
    }
