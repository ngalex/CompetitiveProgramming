#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int c,a;
	cin>>c>>a;
	cout << a/(c-1) << " " <<a%(c-1);

	return 0;
}
