#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

struct segtree{
	int n,t;
	int curr;
	int operation;
	vector<long long> st;
	void init(vector<int> &x){
		t = x.size();
		int  e = 0;
		n = 2 * pow(2, ceil(log2(t))) - 1;
		st.resize(n);
		for(int i = n / 2; i < n; i++, e++) st[i] = x[e];
		operation = 0;
		curr = ceil(log2(n));
		for(int i = n / 2 - 1; i >= 0; i--){
            //cout << ceil(log2(i*2+1))<<":::"<<curr<<endl;
            if(!operation) st[i] = st[i * 2 + 1] | st[i * 2 + 2];
            else st[i] = st[i * 2 + 1] ^ st[i * 2 + 2];
            if (ceil(log2(i*2+1)) < curr) {
                operation = operation^1;
                curr--;
            }
		}
	}
	void update(int i, int a){
		i += n / 2;
		st[i] = a;
		operation = 0;
		while(i != 0){
			i = (i - 1) / 2;
			if(!operation) st[i] = st[i * 2 + 1] | st[i * 2 + 2];
            else st[i] = st[i * 2 + 1] ^ st[i * 2 + 2];
            operation = operation^1;
		}
	}
};

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int n, q,i,j;
	cin>>n>>q;
	n = 1 << n;
	vector<int> x(n);
	for(int i = 0; i < n; i++) cin>>x[i];
	segtree values;
	values.init(x);
	//fori(i,values.st.size()) cout << values.st[i] << " ";
	//cout << "\n";
	for(int i = 0; i < q; i++){
		int a, b;
		cin>>a>>b;
		values.update(a-1,b);
		cout << values.st[0]<<"\n";
	}
	return 0;
}
