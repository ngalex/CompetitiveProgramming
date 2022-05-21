#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	ll t,n,i; cin>>t;
	while(t--) {
        cin>>n;
        bool criba[n];
        memset(criba,1,sizeof criba);
        ll res = 0;
        for(i = 1; i < n; i++){
            for (ll j = i*i; j < n && criba[j] != 0; j++){
                if (n % j != 0) criba[j] = 0;
                if (n%j == 0) res+=j;
            }
        }
        if(res>n) cout << "abundant\n";
        else if (res < n) cout << "deficient\n";
        else cout << "perfect\n";
	}


	return 0;
}
