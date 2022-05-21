#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c, t, m, num, ans;
    vector<int> bolsas;
    cin >> n>>c>>t;
    m = n;
    while(m--){
        cin >> num;
        bolsas.push_back(ceil((float)num / (float)t));
    }
    ans = 0;
    m = n;
    while(m){
        sort(bolsas.begin(), bolsas.end());
        num = bolsas[n-c];
        ans += num;
        for(int j = n-1; j >= n-c; j--){
            if(bolsas[j]) bolsas[j] -= num;
            if(bolsas[j] < 1) m--;
        }
        if(c > m) c = m;
        for(int i: bolsas) cout<< i <<" ";
        cout <<endl;
    }
    cout<<ans<<"\n";


    return 0;
}
