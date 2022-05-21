#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    int m,i,j, ctr, res = 0;
    string str;
    while(n--){
        cin >> m;
        cin>>str;
        j = 0;
        i = 0;
        res = 0;
        for(int k = str.length()-1; k > -1; k--) {
            if (str[k] == '<') break;
            else i++;
        }
        for(int k = 0; k < str.length(); k++) {
            if (str[k] == '>') break;
            else j++;
        }
        //cout << i <<" " << j <<endl;
        cout << min(i,j) <<"\n";
    }
}
/*i = count(str.begin(), str.end(), '<');
        j = count (str.begin(), str.end(), '>');
        if (i > j) {
            ctr = 0;
            for(int k = str.length()-1; k < -1; k--) {
                if (str[k] == '<') {res += ctr; break;}
                else ctr++;
            }
        } else {
            ctr = 0;
            for(int k = 0; k < str.length(); k++) {
                if (str[k] == '>') {res += ctr; break;}
                else ctr++;
            }
        }*/
