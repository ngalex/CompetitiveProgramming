//adhoc
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int ans;
    pair<int,int> now, awk;
    while(cin >> now.first >> now.second >> awk.first >> awk.second && (now.first + now.second + awk.first + awk.second != 0)){
        ans = 0;
        if(now > awk){
            ans += (23 - now.first)*60 + (60 - now.second);
            now = {0,0};
        }
        ans += (awk.first - now.first) * 60 + (awk.second - now.second);
        cout << ans << "\n";
    }
    return 0;
}
