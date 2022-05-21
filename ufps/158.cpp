#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string d;
    int t,i,cont,cant;
    cin>>t;
    while(t--){
        cin>>d;
        cont=0;
        cant=0;
        i=0;
        while(i<d.size()){
            if(d[i]=='<')cont++;
            if(d[i]=='>' && cont>0){
                cont--;
                cant++;
            }
            i++;
        }
        cout<<cant<<"\n";
    }
    return 0;
}
