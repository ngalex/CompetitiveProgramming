#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,n,sum,m;
    cin>>t;
    while(t--){
        m=0;
        sum=0;
        while(cin>>n && n!=0){
            m++;
            sum+=n;
        }
        cout<<sum/m<<" = "<<sum<<" / "<<m<<"\n";
    }
    return 0;
}
