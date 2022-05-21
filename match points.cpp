#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, z, i, ifinal, j, ans, jinicial;
    bool flag = 1;
    vector<int> points;
    ans = 0;
    cin >> n >> z;
    points.resize(n);
    for(auto &x : points)
        cin >> x;
    sort(points.begin(), points.end());
    jinicial = n + 1 >> 1;
    ifinal = jinicial;
    while(jinicial < n) {
        for(i = 0; i < ifinal; i++) {
    cout<<points[i] <<"-"<<points[jinicial+i]<<endl;

            if(abs(points[i] - points[jinicial + i]) >= z) {
                jinicial += i+1;
                ++ans;
                break;
            }
            /*for (j = jinicial; j < n; j++) {
                if (abs(points[i] - points[j]) >= z) {
                    jinicial = j + 1;
                    ++ans;
                    break;
                }
            }*/
        }
    }
    cout << ans << "\n";
    return 0;
}
