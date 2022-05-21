#include <bits/stdc++.h>

using namespace std;

main() {
    string n; cin>>n;
    int m = 0;
    for(auto &x: n) {
        if (x == '4' || x == '7') m++;
    }
    if (m == 7 || m == 4) cout <<"YES\n";
    else cout << "NO\n";
    return 0;
}
