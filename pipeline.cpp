#include <bits/stdc++.h>

using namespace std;

int sumatoria(int num) {
    return num*(num+1)/2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    int k, res, m;
    cin>>n>>k;
    res = 0;
    m = k;
    k--;
    if (n > 1)
    while(k){
            res ++;
        if (m == n) break;
        else if ( m > n || k < 2 ) {res = -1; break;}
        else {
            m += k-1;
            k--;
        }

    }
    cout << res <<endl;



}
