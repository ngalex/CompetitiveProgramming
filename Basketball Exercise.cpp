#include <bits/stdc++.h>
using namespace std;
    vector <int> row1,row2;
    int n,res = 0;
void sum(int m, int i, int aux){
    if (i == n) {
        res = max(res, aux);
    } else {
        if (m == 0) sum(1, i+1, aux+row1[i]);
        else sum(0, i+1, aux+row2[i]);
    }
}


int main () {
    int m, w;
    cin >> n;
    int gidx = 0;
    m = n;
    while(m--){
        cin >> w; row1.push_back(w);
    }
    m = n;
    while(m--){
        cin>>w; row2.push_back(w);
    }
    sum(0, 0, 0);
    cout << res << endl;


}

/*
 if (row1[gidx] >= row2[gidx]) {m = 0; res += row1[gidx];}
    else { m  =1; res += row2[gidx];}
    gidx++;
    while(gidx < n){
        if (m == 0) {
            if ((gidx+1) < n && row2[gidx+1] > row2[gidx]) gidx++;
            res += row2[gidx];
            m = 1;
        }else {
            if ((gidx+1) < n && row1[gidx+1] > row1[gidx]) gidx++;
            res += row1[gidx];
            m = 0;
        }
        gidx++;
    }
    cout << res <<"\n";

*/
/*
5
2 1 1 1 20
1 1 1 1 30

5
1 1 1 1 1
1 1 1 10 1
*/
