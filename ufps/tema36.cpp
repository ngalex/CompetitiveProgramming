#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,A,B;
    cin>>N;
    while(N){
        cin>>A>>B;
        if(A<B)cout<<A<<" < "<<B<<"\n";
        if(A==B)cout<<A<<" = "<<B<<"\n";
        if(A>B)cout<<A<<" > "<<B<<"\n";
        N--;
    }
    return 0;
}
