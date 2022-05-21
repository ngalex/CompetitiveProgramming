#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,m,num;
    vector<int> a,b;
    bool flag = 0;
    cin>>t;
    while(t--) {
        cin>>n;
        m = n;
        while(m--) {
            cin>>num;
            a.push_back(num);
        }
        m = n;
        while(m--){
            cin>>num;
            b.push_back(num);
        }
        int i = 0, j = n-1;
        flag = 0;
        while(i < j &&  !flag) {
            if (abs(a[i]-b[i]) != 0) {
                if (abs(a[j]-b[j]) != 0) flag = 1;
                else j--;
            } else i++;

        }
        int aux = abs(a[i]-b[i]);
        //cout << aux << endl;
        flag = 0;
        for(i; i <= j; i++) {
            //cout << i << " " << j<< endl;
            if (abs(a[i]-b[i]) != aux || a[i] > b[i]) {flag = 1; break;}
        }
        if (!flag) cout << "YES\n";
        else cout << "NO\n";
        a.clear();
        b.clear();

    }
}
