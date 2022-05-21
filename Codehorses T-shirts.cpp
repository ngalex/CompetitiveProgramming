#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	map<string,int> shirtsOld, shirtsNew;
	int n; cin>>n;
	int m = n;
	string s;
	while(m--) {
        cin>>s;
        shirtsOld[s]++;
	}
	m = n;
	while(m--) {
        cin>>s;
        shirtsNew[s]++;
	}
	int sum = 0;
	sum += abs(shirtsNew["M"]-shirtsOld["M"]);
	sum += abs(shirtsNew["L"]-shirtsOld["L"]);
	sum += abs(shirtsNew["S"]-shirtsOld["S"]);
	sum += abs(shirtsNew["XL"]-shirtsOld["XL"]);
	sum += abs(shirtsNew["XS"]-shirtsOld["XS"]);
	sum += abs(shirtsNew["XXL"]-shirtsOld["XXL"]);
	sum += abs(shirtsNew["XXS"]-shirtsOld["XXS"]);
	sum += abs(shirtsNew["XXXL"]-shirtsOld["XXXL"]);
	sum += abs(shirtsNew["XXXS"]-shirtsOld["XXXS"]);

    cout << sum / 2 << "\n";

	return 0;
}
