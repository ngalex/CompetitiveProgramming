#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t, d;
    float res;
    pair<int,int> last;
    cin>>n;
    cin>>t>>d;
    last = {t,d};
    --n;
    res = 0;
    while(n--){
        cin>>t>>d;
        if ((d - last.second) / (t - last.first) > res) res = (d - last.second) / (t - last.first);
        last = {t,d};
    }
    cout << res <<endl;



}

