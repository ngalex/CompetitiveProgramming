#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,n,m,i,ans;
    vector<int> leds;
    cin>>t;
    while(t--){
        leds.resize(7);
        cin>>n;
        ans=0;
        while(n--){
            for(i=0;i<7;i++){
                cin>>m;
                if(m)leds[i]++;
            }
        }
        m=0;
        for(i=0;i<7;i++) {if(leds[m]>=leds[i])m=i;}
        ans+=leds[m];
        cout<<ans<<"\n";
        leds.clear();
    }
    return 0;
}
