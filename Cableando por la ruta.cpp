#include <iostream>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
    int n,k,num,mink=1e9+5,maxk=0;
    cin>>n>>k;
    while(n--) {
        cin>>num;
        mink = min(mink, num);
        maxk = max(maxk, num);
    }
    if(mink >= k) cout << maxk-k;
    else if(maxk <= k) cout << k-mink;
    else cout << maxk-mink;
    cout << "\n";
	return 0;
}
