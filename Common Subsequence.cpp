#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int t,n,m,num, res;
    vector<int>a,b;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        while(n--) {
            cin>>num;
            a.push_back(num);
        }
        res = -1;
        while(m--) {
            cin>>num;
            if (count(a.begin(), a.end(), num) != 0 && res == -1) {res = num;;}
        }
        if(res != -1) cout << "YES\n1 "<< res << "\n";
        else cout<< "NO\n";
        a.clear();
    }

}
