#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int n,d;
	cin >>n>>d;
	cout << setprecision(1) << fixed <<((float)(n-1) - d)/2 + d<<"\n";
	return 0;
}
