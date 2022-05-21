#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;
vector<int> v;
int bs(int x, int a, int b) {
    int k;
    while ((b-a)>1) {
        k = (a+b)/2;
        if (v[k] < x) a = k;
        else b = k;
    }
    if (v[k] == x) return k;
    else return -1;
}

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	v = {4,2,5,3,5,8,3};
    sort(v.begin(),v.end());
    int i,n = v.size();
    fori (i,n) cout << v[i] <<" ";
    cout <<"\n";
    cout << "pos: " <<  bs(3,0,n) <<"\n";

	return 0;
}
