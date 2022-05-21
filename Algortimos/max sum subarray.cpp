#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int n,i;
	int num;
	cin>>n;
	int nums[n];
    fori(i,n){
        cin>> nums[i];
    }
    int best = 0, sum = 0;
    fori(i,n){
        sum = max(nums[i], sum + nums[i]);
        dbg(sum);
        best = max(best,sum);
    }
    cout << best << endl;
	return 0;
}

//-1 2 4 -3 5 2 -5 2
