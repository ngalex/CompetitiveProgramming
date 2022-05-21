#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int t,n; cin>>t;
	while(t--) {
        cin>> n;
        while(n%2020 != 0 && n > 2020) {
            n-=2021;
        }
        if(n % 2020 == 0) cout << "YES\n";
        else cout <<"NO\n";

	}

	return 0;
}
