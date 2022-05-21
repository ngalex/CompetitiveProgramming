#include <bits/stdc++.h>
#include <set>
using namespace std;
int main(){
    int i,N,nota, aux;
    set<int> notas;
    set<int>::iterator it;
    cin>>N;
    while(N){
        aux = 0;
        i=3;
        while(i){
            cin>>nota;
            notas.insert(nota);
            i--;
        }
        cout<< notas.end()<<"\n";
        N--;
    }
    return 0;
}
