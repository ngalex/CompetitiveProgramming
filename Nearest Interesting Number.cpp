#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;
map<int,int> num{
    {'0',0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9}
};



int sumdig(int y) {
    int sum = 0;
    for(auto &x: to_string(y)) sum += num[x];
    return sum;
}

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int a; cin>>a;
	int sum = 0;
	while (sumdig(a) % 4 != 0) a++;
	cout << a << "\n";

	return 0;
}
