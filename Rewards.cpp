#include <bits/stdc++.h>
using namespace std;

int main( )
{
    int asum= 0,bsum=0;
    int a1; cin>>a1; asum += a1;
    int a2; cin>>a2; asum += a2;
    int a3; cin>>a3; asum += a3;
    int b1; cin>>b1; bsum += b1;
    int b2; cin>>b2; bsum += b2;
    int b3; cin>>b3; bsum += b3;
    int n; cin>>n;

    cout << ((asum/5 + ((asum%5 !=0)? 1:0) + bsum/10 + ((bsum%10 != 0)? 1:0) <= n )? "YES":"NO")<<"\n";
    return 0;
}
