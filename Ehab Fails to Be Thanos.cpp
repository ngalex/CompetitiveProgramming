#include <bits/stdc++.h>
using namespace std;

int main( ){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    vector<int> p;
    int sum1=0,sum2=0;
    int m = 2*n,num;
    while(m--){
        cin>> num;
        p.push_back(num);
    }
    m = 2*n;
    sort (p.begin(), p.end());
    for(int i = 0; i < m; i++){
        if (i < n) sum1 += p[i];
        else sum2 += p[i];
    }
    if (sum1 == sum2) cout << "-1\n";
    else for (auto &x: p) cout << x <<" "; cout <<"\n";

}



/*
    for(int i = 0; i < m; i++){
        if (i < n) {
                if(p[i] <  min1) {
                    min1 = p[i]; j = i;
                }
        } else {
            if (max2 < p[i]) {
                max2 = p[i]; k = i;
            }
        }
    }
    if (min1 != max2) {
        p[j] = max2;
        p[k] = min1;
        for(auto &x: p) cout << x <<" ";
        cout << "\n";
    } else  cout << "-1\n";
    */

/*while (m--){
        cin >> num;
        p.push_back(num);
        if (p.size() > n) max2 =  max(max2, num);
    }

    m = 2*n;

    while (m--){
        sum1 = 0; sum2 = 0;
        for(int i = 0; i < n; i++) {
            sum1 += p[i];
            sum2 += p[i+n];
        }
        if (sum1 != sum2) {
            for(auto &x: p) cout << x << " ";
            cout << "\n";
            return 0;
        }
        num = p[0];
        p.pop_front();
        p.push_back(num);
    }*/
