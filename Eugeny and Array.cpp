#include <iostream>
#include <vector>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	ll n, q,i,a,b;
	ll ones = 0, nones = 0;
	cin>>n>>q;
	vector<ll> x(n);
	fori(i ,n) {
	    cin>>x[i];
	    if (x[i] == 1) ones++;
        else nones++;
	}
	fori(i,q){
	    cin>>a>>b;
        int aux = b-a+1;
        if (aux%2 != 0) cout << 0 << "\n";
        else if (ones < aux/2 || nones < aux/2) cout << 0 <<"\n";
        else cout <<1<<"\n";
	}
    return 0;
}
