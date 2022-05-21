#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int t,n,m,a,b;
	vector<int> ai,bi;
	int minA,minB;
	cin>>t;
	while(t--) {
        cin>>n;
        m = n;
        minA = INT_MAX;
        minB = INT_MAX;
        while(m--) {
            cin>>a;
            minA = min(minA,a);
            ai.push_back(a);
        }
        m = n;
        while(m--) {
            cin>>b;
            minB = min(minB,b);
            bi.push_back(b);
        }
        int i,aux;
        ll res = 0;
        //cout << minA<<":::"<<minB<<endl;
        fori(i,n) {
            aux = min(abs(minA - ai[i]), abs(minB-bi[i]));
            ai[i] -= aux;
            bi[i] -= aux;
            res += aux;
            res += abs(minA-ai[i]);
            res += abs(minB-bi[i]);
            //dbg(res);
        }
        cout << res <<"\n";
        ai.clear();
        bi.clear();
	}

	return 0;
}
