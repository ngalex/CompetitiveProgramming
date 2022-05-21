#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;
/*
10
  2 -5 -3 -10 10 11 12 5 2 3
0 2 -3 -6 -16 -6 5 17 22 24 27
              (x)           (X)
*/

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int n,num,aux = 0;cin>>n;
	//vector<int> a,b;
	//b.push_back(0);
	int minE = INT_MAX, maxE = 0;
	cout << aux << " ";
	while(n--){
        cin>>num;
        //a.push_back(num);
        //b.push_back(*b.rbegin()+num);
        //minE=min(minE,*b.rbegin());
        //maxE=max(maxE,*b.rbegin());
        aux += num;
        minE = min(minE, aux);
        maxE = max(maxE,aux);
        cout << aux << " ";
        //dbg(minE); dbg(maxE);
	}
	//dbg(minE); dbg(maxE);
    cout << "\n" << maxE - minE <<"\n";
	/*fori(i, b.size()) {
        cout << b[i] <<endl;

	}
    */
	return 0;
}
