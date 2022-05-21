
#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y,z;
    int a,b,c;
    int n;
    cin >> n;
    while(n--) {
        cin>> x>>y>>z;
        if ( x == y && max(x,max(y,z)) == x) {a = x; b = z; c =z;cout <<"YES\n"<< a << " " << b<<" " <<c<<"\n";}
        else if ( x == z && max(x,max(y,z)) == x) {a =y ; b = x; c =y;cout <<"YES\n"<< a << " " << b<<" " <<c<<"\n";}
        else if ( y == z && max(x,max(y,z)) == y) {a =x ; b = x; c =y;cout <<"YES\n"<< a << " " << b<<" " <<c<<"\n";}
        else cout<< "NO\n";
    }
}
