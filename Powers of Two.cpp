#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;
map<ll, ll> cnt;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, res = 0, num, pow2;
    cin >> n;
    while(n--) {
        cin >> num;
        fori(i, 30) {
            pow2 = 2 << i;
            res += cnt[pow2 - num];
        }
        cnt[num]++;
    }
    cout << res << "\n";
    return 0;
}
