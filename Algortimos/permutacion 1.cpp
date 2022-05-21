#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;
int n = 3;
vector <bool> chosen(n);
vector <int> permutation;

void sch() {
    if(permutation.size() == n){
        for(auto &x: permutation) cout << x <<" ";
        cout <<"\n";
    } else {
        int i;
        fori(i,n) {
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            sch();
            chosen[i] = false;
            permutation.pop_back();
        }
    }

}

void next_perm() {
    int i;
    fori(i,n) permutation.push_back(i);
    do{
        for(auto &x: permutation) cout << x <<" ";
        cout << "\n";
    }while(next_permutation(permutation.begin(), permutation.end()));
}

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	cout << "Algoritmo recursivo:\n";
	sch();
	cout << "Con next_permutation\n";
    next_perm();

	return 0;
}
