#include <bits/stdc++.h>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, nota;
    set<int> notas;
    set<int>::iterator it;
    cin>>N;
    while(N){
        while(notas.size()<3){
            cin>>nota;
            notas.insert(nota);
        }
        it=++notas.begin();
        cout<<*it<<"\n";
        notas.clear();
        N--;

    }
    return 0;
}
