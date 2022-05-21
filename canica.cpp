#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

void bs(vector <int> v, int q) {
    int a = 0;
    int b = v.size()+1;
    int medio;
    while(b-a > 1) {
        medio = (a+b)/2;
        if(v[medio] < q)
            a = medio;
        else
            b = medio;
    }
    if (v[a] == q) cout << q << " found at " << a+1 << "\n";
    else if (v[b] == q) cout << q << " found at " << b+1 << "\n";
    else cout << q << " not found\n";
}

int bs2 (vector<int>v, int a, int b, int q) {
    int medio;
    if(b-a > 1) {
        medio = (a+b)/2;
        if(v[medio] < q) return bs2(v, medio,b,q);
        else return bs2(v,a,medio,q);
    } else if (q == v[a]) return a;
    else if (q == v[b]) return b;
    else return -1;
}

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
    int n,q,num, i = 1;
    vector<int> canicas;
    while(cin>>n>>q && n && q) {
        cout << "CASE# " << i++ << ":\n";
        while(n--) {
            cin>>num;
            canicas.push_back(num);
        }
        sort(canicas.begin(), canicas.end());
        int res;
        while(q--) {
            cin >> num;
            res = bs2(canicas,0,canicas.size()+1,num);
            (res != -1)? cout << num << " found at " <<  res << "\n": cout << num << " not found" << "\n";
        }
        canicas.clear();
    }

	return 0;
}
