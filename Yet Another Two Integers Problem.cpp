#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int t,a,b,res;
	cin>>t;
	while(t--) {
        cin>>a>>b;
        res = 0;
        if (a > b) {
            while(a != b) {
                int aux = a - b;
                if (aux > 10) {
                    res += aux / 10;
                    a -= (aux/10) * 10;
                } else {
                    res++;
                    a -= aux;
                }
            }
            cout << res <<"\n";
        } else if (b > a) {
            while(a != b) {
                int aux = b - a;
                if (aux > 10) {
                    res += aux / 10;
                    b -= (aux/10) * 10;
                } else {
                    res++;
                    b -= aux;
                }
            }
            cout << res <<"\n";
        } else cout << "0\n";

	}

	return 0;
}
