#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int a, c, n, ans, aux;
    bool flag;
    vector<int> heights;
    while(cin >> a >> c && (a + c)) {
        heights.resize(c);
        for(auto &x : heights)
            cin >> x;
        ans = 0;
        aux = a;
        while(aux) {
            flag = 0;
            for(n = 0; n < c; n++) {
                if(heights[n] >= aux ) {
                    if(n == 0)
                        flag = 1;
                    else {
                        if(flag == 0) {
                            ans++;
                            flag = 1;

                        }
                    }
                }
                else {
                    if(flag == 1)
                        flag = 0;
                }

            }
            if(flag == 0)
                ans++;
            aux--;
        }
        cout << ans << "\n";
        heights.clear();
    }
    return 0;
}
