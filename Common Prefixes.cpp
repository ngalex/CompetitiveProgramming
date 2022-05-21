#include <bits/stdc++.h>

using namespace std;
int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int t,n,m,num;
    vector<int> sff;
    string res;
    cin>>t;
    while(t--) {
        cin>>n;
        m = n;
        while(m--) {
            cin>> num;
            sff.push_back(num);
        }
        res = string(200,'x');
        cout << res <<"\n";
        for(auto &x: sff) {
                //resAux = res;
                if (res[x] == 'x') res.replace(x, 1,string(1,'d'));
                else res.replace(x, 1,string(1,'x'));
                cout << res << "\n";
        }
        sff.clear();
    }
}
