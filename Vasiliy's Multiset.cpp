#include <bits/stdc++.h>
using namespace std;
//map<int, pair<string, int>> mset;
map<int, int> nset;
map<int,string> sset;

string to_bin(int y, int k) {
    if (y == 0) {if (k > 0) return to_bin(y,k-1) + "0"; else return "";}
    else if (y == 1) return to_bin (0, k-1) + "1";
    else return to_bin(y/2, k-1) + to_string(y%2);
}

int comparar(string a, string b) {
    int res = 0;
    int j = 0;
    for (int i = a.length()-1; i > -1; i--) {
        if (a[i] != b[i]) res += (1 << j);
        j++;
    }
    return res;
}
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, res = 0;
    char op;
    cin>>n;
    //cout << comparar(to_bin(3,30),to_bin(8,30)) << endl;
    //for (int i = 0; i < 5; i++) cout << (1<<i) << endl;
    while(n--) {
        cin >> op>>x;
        //res = 0;
        if (op == '+') {nset[x]++; if (sset[x] == "") sset[x]=to_bin(x,30); }
        else if (op == '-') nset[x]--;
        else if (op == '?') {for(auto &m : sset) {
                //cout << comparar(m.second,to_bin(x,30)) <<endl;
                if (nset[m.first] > 0) {
                        /*cout << m.first << " "; */
                        res = max(res, comparar(to_bin(x,30),m.second));}
            }
            cout << res<<"\n";
        }

    //cout << sset.size() <<endl;
    //for(auto &m : nset) cout << m.first << " " << m.second <<endl;
    //for(auto &m : sset) cout << m.first << " " << m.second <<endl;
    }
}
