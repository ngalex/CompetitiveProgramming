#include <iostream>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int n,k;
	cin>>k>>n;
	int i = 1;
    while(n>1) {
        cout << i++ << "\n";
        n--;
    }
    cout << k - (n-1)*(n-2)/2) << "\n";
	return 0;
}
