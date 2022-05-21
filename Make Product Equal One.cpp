#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,t,num, m = 0, res =0;
    vector<int> nums, aux;
    cin >> n;
    t = n;
    while (t--){
        cin>> num;
        if (num < 0) {aux.push_back(num); m++;}
        else if (num == 0) res ++;else if (num != 1) res += num -1;
        nums.push_back(num);
    }
    num = m -((m%2 != 0)? 1:0);
    for (int i = 0; i < m; i++){
        res += (-1)*aux[i] -1;
    }

    if (m % 2 != 0) res += (-1)*aux[m-1] +1;
    cout << res <<"\n";
}
