#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, i, ans;
    vector<int> sucesion;
    cin >> n;
    ans  = 0;
    sucesion.resize(n);
    for(auto &x : sucesion) cin>>x;
    for(i = 0;i < n;i++) {
        if(sucesion[i]  ==  1) {
            if(sucesion[i+1] == 2)
                ans += 3;
            if(sucesion[i+1] == 3)
                ans += 4;
        }
        if(sucesion[i] == 2) {
            if(sucesion[i+1] == 1)
                ans += 3;
            if(sucesion[i+1] == 3){
                cout << "Infinite\n";
                return 0;
            }
        }
        if(sucesion[i] == 3) {
            if (sucesion[i+1] == 1)
                ans +=  4;
            if(sucesion[i+1] == 2){
                cout << "Infinite\n";
                return 0;
            }
        }
        if(sucesion[i-2]==3 && sucesion[i-1]==1 && sucesion[i]==2 && i>=2) ans--;
    }
    cout <<"Finite\n" <<ans <<"\n";
    return 0;
}
