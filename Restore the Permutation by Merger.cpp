#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,m,num;
    vector<int> per;
    map <int,int> cnt;
    string res;
    cin>>t;
    while(t--){
        cin>>n;
        res = "";
        m = 2*n;
        while(m--){
            cin>>num;
            cnt[num]++;
            if(cnt[num]<2) res += std::to_string(num) + " ";
        }
        cout << res << "\n";
        cnt.clear();
    }
}
