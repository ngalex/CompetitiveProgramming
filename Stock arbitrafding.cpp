#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, r, si, bi, bourles;
    vector<int> prices;
    cin  >> n >> m >> r;
    while(n--) {
        cin >> si;
        prices.push_back(si);
    }
    sort(prices.begin(), prices.end());
    si = prices[0];
    bourles = r / si;
    r %= si;
    prices.clear();
    while(m--) {
        cin >> bi;
        prices.push_back(bi);
    }
    sort(prices.begin(), prices.end(), greater<int>());
    bi = prices[0];
    if(bi < si)
        cout << bourles*si + r << "\n";
    else {
        r += bourles * bi;
        cout << r << endl;
    }

    return 0;
}
