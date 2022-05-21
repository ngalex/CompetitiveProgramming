#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,i,mes;
    vector<int> n = {0,1};
    cin>>t;
    while(t--){
        cin>>mes;
        if(mes>=n.size()){
            for(i=n.size()-1;i<mes;i++){
                n.push_back(n[i-1]+n[i]);
            }
        }
        cout<<n[mes]*2<<"\n";
    }
    return 0;
}
