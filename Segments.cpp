#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,a,b; cin>>n;
    vector<pair<int,int>> seg;
    vector<vector<int>> sup;
    while (n--){
        cin>>a>>b;
        seg.push_back(std::make_pair(min(a,b),max(a,b)));
    }
    for(int i = 0; i < seg.length(); i++) {
        for(int j = i+1; j < seg.length() ;j++) {
            if(seg[j].first >= seg[i].first && seg[j].first =< seg[i].first ||
               seg[j].second >= seg[i].first && seg[j].second =< seg[i].first)
        }
    }

}
