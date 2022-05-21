#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,i; cin>>n; i = n;
    long long m,j;  cin>>m; j = m;
    long long rest;
    map <int,long long> divN;
    rest = m/n;
    while (rest > 1) {
        if (rest %2 == 0) {divN[2]++; rest /= 2;}
        else {divN[3]++; rest /= 3;}
    }
    int res = n * pow(2,divN[2])*pow(3,divN[3]);
    if (res == m) cout << divN[2] + divN[3] << "\n";
    else cout << -1 <<"\n";
}
