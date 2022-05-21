#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int n = 3;
	for (int b = 0; b < (1<<n); b++){
        vector<int> subset;
        int i;
        fori(i,n){
            if(b&(1<<i)) subset.push_back(i);
        }
        for(auto &x: subset) cout << x << " ";
        cout <<"\n";
	}

	return 0;
}
