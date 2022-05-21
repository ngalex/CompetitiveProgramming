#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a, i, j, k;
    vector <int> arr;
    bool flag = 1;
    cin >> n;
    arr.resize(n);
    for(auto &x : arr)
        cin >> x;
    sort(arr.begin(),arr.end());
    k = INT_MAX;
    for(i=0;i<n;i++){
        k = min(k,min(arr[i]/(i+1),arr[i]/(n-i+1)));
    }
    cout << k << endl;
    return 0;
}
