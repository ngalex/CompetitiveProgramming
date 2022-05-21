#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int m,n,s,t;
	cin>>m;
	while(m--) {
        cin >> n>>s >>t;
        cout << max(n-s,n-t)+1 << "\n";
	}

	return 0;
}
