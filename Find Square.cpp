#include <bits/stdc++.h>
using namespace std;

int main( ){
    int n; cin>>n;
    int m; cin>>m;
    int x,y, len =0;
    string row;
    bool flag = false;
    int table[n][m];
    int i = n;
    while(i--){
        cin >> row;
        if (!flag) for(int j = 0; j < row.length(); j++){
            if (row[j] == 'B') {len++; if (!flag) {x = n - i; y = j +1 ; flag = true;} }
        }
    }
    cout << x + ((len+1)/2) -1<< " " << y + ((len+1)/2) -1<<"\n";
return 0;
}
