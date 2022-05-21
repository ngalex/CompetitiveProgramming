#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,T,i;
    pair<int,int> p;
    string cola;
    cin>>N;
    while(N){
        cin>>T;
        cin>>cola;
        i=0;
        p={0,0};
        while(i<cola.length() && T){
            (cola[i]==cola[0])?p.first++:p.second++;
            !(abs(p.first-p.second)>T && cola[i+1]==cola[i])?i++:T=0;
        }
        cout<<i<<"\n";
        N--;
    }
    return 0;
}
