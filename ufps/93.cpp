#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,i;
    string k;
    cin>>N;
    while(N){
        cin>>k;
        i=k.length()-1;
        while(i>-1){
            (i!=0)?cout<<k[i]:cout<<k[i]<<"\n";
            i--;
        }
        N--;
    }
    return 0;
}
