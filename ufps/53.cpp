#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,a,b,i,ans;
    cin >> t;
    while(t--){
        cin >> a >> b;
        ans = 0;
        for(i = 1 ; i <= b ; i++){
            if( i%a ==  0 ){
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
