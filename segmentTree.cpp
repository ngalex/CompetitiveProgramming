//https://cses.fi/problemset/task/1648
#include<iostream>
#include<math.h>
#include<vector>
#define dbg(x) cerr << #x << " = " <<(x) << endl
using namespace std;
struct segtree{
	int n;
	vector<long long> st;
	void init(vector<int> &x){
		int t = x.size(), e = 0;
		n = 2 * pow(2, ceil(log2(t))) - 1;
		st.resize(n);
		for(int i = n / 2; i < n; i++, e++){
			if(e < t) st[i] = x[e];
			else st[i] = 0;
		}
		for(int i = n / 2 - 1; i >= 0; i--){
			st[i] = st[i * 2 + 1] + st[i * 2 + 2];
		}
	}
	void update(int i, int a){
		i += n / 2;
		st[i] = a;
		while(i != 0){
			i = (i - 1) / 2;
			st[i] = st[i * 2 + 1] + st[i * 2 + 2];
		}
	}
	long long query(int qi, int qd, int si, int sd, int i){
	    dbg(si);
	    dbg(sd);
	    dbg(i);
		if(si >= qd || sd <= qi) return 0;
		if(si >= qi && sd <= qd) return st[i];
		int sm = (si + sd) / 2;
		dbg(sm);
		long long a = query(qi, qd, si, sm, i * 2 + 1);
		long long b = query(qi, qd, sm, sd, i * 2 + 2);
		return a + b;
	}
	long long query(int qi, int qd){
		return query(qi, qd, 0, n / 2 + 1, 0);
	}
};
int main(){
	int n, q;
	cin>>n>>q;
	vector<int> x(n);
	for(int i = 0; i < n; i++) cin>>x[i];
	segtree values;
	values.init(x);
	for(int i = 0; i < q; i++){
		int t, a, b;
		cin>>t>>a>>b;
		if(t == 1){
			values.update(a - 1, b);
		} else{
			cout<<values.query(a - 1, b)<<"\n";
		}
	}
	return 0;
}
