
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, c, op, i, ans;
    string me, fd;
    cin >> n >> me >> fd;
    c = 0;
    op = 0;
    for(i = 0; i < me.length(); i++) {
        if(me[i] == fd[i])
            c++;
        else
            op++;
    }
    ans = 0;
    if(c < n) {
        n -= c;
        ans += c;
        op -= n;
        ans += op;
    } else {
        ans += n + op;
    }
    cout << ans << endl;
}
