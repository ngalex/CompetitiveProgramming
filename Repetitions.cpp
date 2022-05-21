#include <iostream>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	string dna; cin>>dna;
	int i, cnt =0, res = 0;
	char crr = dna[0];
	fori(i, dna.length()) {
        if (dna[i] != crr){
            crr = dna[i];
            res = max(res,cnt);
            cnt = 0;
        }
        cnt++;
	}
    res = max(res,cnt);
	cout << res <<"\n";


	return 0;
}
