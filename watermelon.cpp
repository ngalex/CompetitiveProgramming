#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int w;
    cin>>w;
    cout << ((w%2 == 0)? "YES\n":"NO\n");
}
    /*int n = 100;
    bool criba[n+1];
    memset(criba,1,sizeof criba);
    for(int i = 2; i <= n; i++){
        for (int j = i*i; j <= n && criba[j] != 0; j++){
            if (j % i == 0) criba[j] = 0;
        }
    }
    for(int i = 2; i <= n; i++) {
        if (criba[i]) cout << i << " ";
    }
    //int m = 0;
    //for(auto &x: criba) {if (x) cout << m <<" "; m++; }
    cout <<"\n";

    //int w;
    //cin>>w;
    //cout << ((w%2 == 0)? "YES\n":"NO\n");*/

