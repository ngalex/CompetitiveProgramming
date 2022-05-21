#include <iostream>
#include <math.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int n,m,a;
	cin>>n>>m>>a;
	ll res,h,b;
    b = ceil((double)n/a);
    h = ceil((double)m/a);
    res = b*h;
	cout << res <<"\n";
	return 0;
}
