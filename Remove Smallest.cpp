#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	vector<int> nums;
	int t,n,m,num;
	cin>>t;
	while(t--)
    {
        cin>>n;
        m = n;
        while(m--){
            cin>>num;
            nums.push_back(num);
        }
        int i = 0, j  = n-1;
        bool fv[n];
        memset(fv,1,sizeof fv);
        sort(nums.begin(), nums.end());
        fori(i,n) {
            for(j = i +1; j<n && fv[j]; j++) {
                if (abs(nums[i]-nums[j]) < 2) {
                    if (nums[i] < nums[j]) fv[i] = 0;
                    else fv[j] = 0;
                }
            }

        }
        int aux = 0;
        fori(i,n) {if (fv[i] == 1) {aux++; if (aux > 1)break;}}
        if (aux < 2) cout << "YES\n"; else cout << "NO\n";
        nums.clear();
    }


	return 0;
}
