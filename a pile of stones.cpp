#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, i, ans, push, pop;
    string operations;
    cin >> n >>  operations;
    push = count(operations.begin(), operations.end(), '+');
    pop = count(operations.begin(), operations.end(), '-');
    ans = 0;
    if(push == n)
        cout << n;
    else if(pop == n)
        cout << 0 ;
    else {
        for(i = 0; i < n; i++) {
            if(operations[i] == '+') {
                ans++;
            } else if(ans > 0)
                ans--;
        }
        cout << ans;
    }
    cout << "\n";
    return 0;
}
