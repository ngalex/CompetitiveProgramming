#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,B;
    pair<string,int> mov;
    cin>>N;
    while(N){
        cin>>B;
        mov.second=B;
        while(B){
            cin>>mov.first;
            if(mov.first.find("CD") < mov.first.length())mov.second--;
            B--;
        }
        cout<<mov.second<<"\n";
        N--;
    }
    return 0;
}
