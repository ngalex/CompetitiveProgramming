#include <iostream>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
    int n,m,i,a,b;
    ll ans = 0;
    //vector<int> terms,btn;
    cin>>n; m = n;
    ll terms[n], btn[n];
    fori(i,n) cin>>terms[i]>>btn[i];
    for(i = n-1; i > -1; i--) {
            terms[i] += ans;
        if (terms[i]%btn[i] != 0) {
            ans += btn[i] - (terms[i]%btn[i]);
            terms[i] += btn[i] - (terms[i]%btn[i]);
        }
    }
    cout << ans <<"\n";

	return 0;
}
