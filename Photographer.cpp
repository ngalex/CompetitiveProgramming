
#include <bits/stdc++.h>

using namespace std;
int main() {
    long long n,d,a,b,x,y;
    set<pair<long long,long long>> res;
    //map<int,vector<> res;/
    cin>>n>>d>>a>>b;
    long long i = 1;
    while(n--) {
        cin>>x>>y;
        res.insert(make_pair(a*x+b*y, i++));
    }
    long long aux = 0;
    vector<long long> idx;
    for(auto &x: res) {
        if (aux + x.first <= d){
            idx.push_back(x.second);
            aux += x.first;
        }
        else break;
    }
    cout << idx.size() << "\n";
    for(auto &x: idx) cout << x <<" ";
    cout << "\n";
}
