#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,m,prod;
    string ans;
    char op;
    vector<int> sec;
    while(cin>>n>>k){
        while(n--){
            cin>>m;
            sec.push_back(m);
        }
        ans="";
        while(k--){
            cin>>op>>n>>m;
            if(op=='C')sec[n-1]=m;
            if(op=='P'){
                prod=1;
                while(n<=m){
                    prod*=sec[n-1];
                    n++;
                }
                if(prod==0)ans+='0';
                if(prod>0)ans+='+';
                if(prod<0)ans+='-';
            }
        }
        cout<<ans<<"\n";
        sec.clear();
    }
    return 0;
}
