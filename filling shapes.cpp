#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    unsigned long int ans;
    cin>> n;
    if(n % 2 != 0){
        cout << "0\n";
    }else{
        ans = 2;
        for(int i = 1; i<n/2;i++){
            ans *= 2;
        }
        cout << ans <<"\n";
    }
    return 0;
}
