#include <bits/stdc++.h>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T,N;
    string palabra;
    set<string> palabras;
    set<string>::iterator it;
    cin>>T;
    while(T){
        cin>>N;
        while(N){
            cin>> palabra;
            //UPPERCASE
            transform(palabra.begin(), palabra.end(),palabra.begin(), ::toupper);
            palabras.insert(palabra);
            N--;
        }
        it=palabras.end();
        do{
            it--;
            cout<<*it<<"\n";
        }while(it!=palabras.begin());
        T--;
    }
    return 0;
}
