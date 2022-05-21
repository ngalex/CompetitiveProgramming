#include <bits/stdc++.h>
using namespace std;
int main(){
    int e,n;
    int b;
    cin >> n;
    e = 1;
    while(e <= n+1){
        cout << pow(e,2) << "\n";
        e++;
    }
    return 0;
}
