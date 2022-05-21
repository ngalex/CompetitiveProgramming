#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,ans;
    vector<int> pilas;
    cin>>t;
    pilas.resize(t);
    for(auto &n : pilas)cin>>n;
    int i=t-2;
    ans=t;
    while(i>=0){
        if(pilas[i]>=pilas[i+1])ans-=1;
        i--;
    }
    cout<<ans<<endl;
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int p_min(vector<int> v){
    int p=1;
    for(int i=1; i<v.size();i++){
        if(v[p]>=v[i])p=i;
    }
    return p;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,p,n;
    bool flag;
    vector<int> pilas;
    cin>>t;
    while(t--){
        cin>>n;
        pilas.push_back(n);
    }
    while(p>1){
        p=p_min(pilas);
        if(pilas[p-1]>=pilas[p]){
            pilas.erase(pilas.begin()+p);
        }
    }
    cout<<pilas.size()<<endl;
    return 0;
}
*/
