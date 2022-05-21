#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int n; cin>>n;
	vector<int> nums;
	int i = n, num;
	while(i--) {
        cin>> num;
        nums.push_back(num);
	}
	num = 0;
	int cnt = 0, res = 1;
    fori(i,n){
        if (nums[i] > num) cnt ++;
        else {res = max(res, cnt); cnt = 1;}
        num = nums[i];
    }
    cout << max (res, cnt) <<"\n";
	return 0;
}
