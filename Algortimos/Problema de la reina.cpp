#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
//backtracking
using namespace std;
int res = 0;
bool valid(int col[], int k) {
    int i;
    fori(i,k){
        if(col[i] == col[k] || abs(col[i]-col[k]) == abs(i-k)) return false;
    }
    return true;
}

void bt (int col[], int k, int n) {
    int i;
    if(k == n) {
        fori(i,n) cout << col[i] << " ";
        cout <<"\n";
        res++;
        return;
    } else {
        fori(i,n) {
            col[k] = i;
            if (valid(col, k)) bt(col, k+1, n);
        }
    }
}

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int n = 16;
    int col[n];
    bt(col, 0, n);
    cout << "Soluciones: " << res << "\n";

	return 0;
}
