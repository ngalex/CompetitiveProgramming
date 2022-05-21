#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,i,j, aux;
    bool flag;
    string s;
    cin >>t;
    while(t--){
        cin>> n>>s;
        j = s.length()-1;
        i = 0;
        flag = false;
        while (i<j){
            aux = abs( (int)s[i]-(int)s[j] );
            if( aux == 1 || aux > 2) flag = true;
            i++;
            j--;
        }
        if(!flag) cout <<"YES\n"; else cout << "NO\n";
    }
}
