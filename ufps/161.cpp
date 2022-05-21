#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,n;
    cin>>N;
    while(N){
        cin>>n;
        (abs(n)%2==0)?cout<<n<<" is even"<<"\n":cout<<n<<" is odd"<<"\n";
        N--;
    }

    return 0;
}
