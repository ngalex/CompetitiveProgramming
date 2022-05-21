#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    int m = n,num;
    map<int,ll> cntEvent;
    vector<ll> events;
    ll day = 0;
    ll cnt = 0;
    ll part = 0;
    bool flag = true;
    while(m--) {
        cin>>num;
            if (flag) {
                day += num;
                if (day < 0) flag = false;
                if (num > 0) {if(cntEvent[num] == 0) cntEvent[num]++; else flag = false;}
                //if (num > 0) cntEvent[abs(num)]++;
                //else cntEvent[abs(num)]--;
                cnt++;
                if (day == 0) {
                    for(auto &x: cntEvent) if (x.second > 1) {flag = false; break;}
                    events.push_back(cnt);
                    cnt = 0;
                    part++;
                    cntEvent.clear();
                }
            }
        //events.push_back(num);
    }
    //for(auto &x: cntEvent) if (x.second > 1) {flag = false; break;}
    if (!flag || day != 0) cout << -1 <<"\n";
    else {
        cout << part <<"\n";
        for(auto &x: events) cout << x <<" ";
        cout << "\n";
    }


	return 0;
}
