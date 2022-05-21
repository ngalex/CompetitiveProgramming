#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;
int res;
int n,m,c,a;
void bs (vector<int> v) {
    int a = v[0]-1;
    int b = v[n-1];
    while(b-a>1) {
        int mid = (a+b)/2;
        int aux = 1;
        int last = 0;
        for(int i = 1; i < n; i ++){
            if (v[i]- v[last] >= mid) {
                aux++;
                last = i;
            }
        }
        dbg(mid);
        if (aux >= c) a = mid;
        else b = mid;
    }
    res = a;
}

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	vector<int> barns;
	while(t--) {
        cin>>n>>c;
        m = n;
        bool used[n];
        memset(used, 1, sizeof used);
        while(m--) {
            cin>>a;
            barns.push_back(a);
        }
        sort(barns.begin(), barns.end());
        bs(barns);
        cout << res <<"\n";
        barns.clear();
	}

	return 0;
}
