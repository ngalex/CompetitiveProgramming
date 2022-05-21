#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;
vector<int> subset;
int n;
void show() {
    for(auto &x: subset) cout << x << ". ";
    cout <<"\n";
}

void buscar(int k) {
    if(k == n) {
        show();
    } else {
        buscar(k+1);
        subset.push_back(k);
        buscar(k+1);
        subset.pop_back();
    }
}

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	n = 3;
    buscar(0);
	return 0;
}
