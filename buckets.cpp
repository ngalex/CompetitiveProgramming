#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, b;
    vector<int> buckets;
    cin>>n>>k;
    while (n--){
        cin>>b;
        buckets.push_back(b);
    }
    sort(buckets.begin(),buckets.end());
    int i = 0;
    int j = buckets.size()-1;
    int res = 1;
    while ( i < j)  {
        while (buckets[j] <=k && k - buckets[j] > buckets[i] && i < j){
            buckets[j]+=buckets[i];
            i++;
        }
        if (i<j) res++;
        j--;
    }
    cout << res;
    return 0;
}
