#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;
vector <int>divs;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int n; cin>>n;
	int res = INT_MAX;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) res = min(res, 2*i+2*n/i);
    }
    cout << res <<"\n";

	return 0;
}
