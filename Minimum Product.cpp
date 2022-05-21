#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	ll t,a,b,x,y,n,res;
	cin>>t;
	while(t--){
        cin>>a>>b>>x>>y>>n;
        ll A = a,B = b,N = n;
        ll ra = A-x;
        if (ra > N) ra = N;
        N -= ra;
        A -=ra;
        if (N > 0) {
            ll rb = B-y;
            if (rb > N) rb = N;
            N -= rb;
            B-=rb;
        }
        res = A*B;
        A = a; B= b; N=n;
        ll rb = B-y;
        if (rb > N) rb = N;
        N -= rb;
        B-=rb;
        if (N > 0) {
            ll ra = A-x;
            if (ra > N) ra = N;
            N -= ra;
            A -=ra;
        }
        cout << min(A*B, res) <<"\n";
	}

	return 0;
}
