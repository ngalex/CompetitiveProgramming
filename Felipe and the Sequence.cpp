#include <iostream>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
    int t;
    ll s;
    cin>>t;
    while(t--) {
        cin>>s;
        cout << s*s+2*s << "\n";
    }

	return 0;
}
