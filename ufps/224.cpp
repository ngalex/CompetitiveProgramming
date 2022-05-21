#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,n,m,i;
    string nom;
    deque<string> fila1;
    deque<string> fila2;
    cin>>t;
    while(t--){
        cin>>n>>m;
        while(n--){
            cin>>nom;
            fila1.push_back(nom);
        }
        while(m--){
            cin>>n;
            if(n==1 && fila1.size()>0){
                fila2.push_back(*fila1.begin());
                fila1.pop_front();
            }
            if(n==2 && fila2.size()>0){
                fila1.push_back(*fila2.begin());
                fila2.pop_front();
            }
        }
        if(fila1.size()==0)cout<<"-"<<"\n";
        else
        for(i=0; i<fila1.size();i++){
            (i!=fila1.size()-1)?cout<<fila1[i]<<" ":cout<<fila1[i]<<"\n";
        }
        if(fila2.size()==0)cout<<"-"<<"\n";
        else
        for(i=0; i<fila2.size();i++){
            (i!=fila2.size()-1)?cout<<fila2[i]<<" ":cout<<fila2[i]<<"\n";
        }
        fila1.clear();
        fila2.clear();
    }
    return 0;
}
