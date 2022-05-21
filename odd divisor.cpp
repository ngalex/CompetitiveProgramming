#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	ll n,x; cin>>n;
	while(n--) {
        cin>> x;
        while(x > 1) {

            if(x%2 == 0) x/=2;
            else {
                    cout << "YES\n";
                    break;
            }
        }
        if(x == 1) cout << "NO\n";
	}
	return 0;
}
