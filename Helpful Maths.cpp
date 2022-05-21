#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	string str, res = ""; cin>>str;
	int on = count (str.begin(),str.end(),'1');
	int tw = count (str.begin(),str.end(),'2');
	int th = count (str.begin(),str.end(),'3');
	while(on--) res += "1+";
	while(tw--) res += "2+";
	while(th--) res += "3+";
	for(int i = 0; i < res.length()-1;i++) cout << res[i];
	cout << "\n";

	return 0;
}
