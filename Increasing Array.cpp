#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    ll nums[n];
    int i = 0;
    fori(i,n) cin>>nums[i];
    ll res = 0;
    for(i = 1; i < n; i ++) {
        if(nums[i] < nums[i-1]) {
            res += nums[i-1]-nums[i];
            nums[i] += nums[i-1]-nums[i];
        }
    }
    cout << res << "\n";
	return 0;
}
