#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,num;
    vector<int> a;
    cin>>t;
    while(t--){
        cin>>n;
        while(n--){
            cin>>num;
            a.push_back(num);
        }
        int m = a.size();
        int i;
        bool flag = false;
        for(i = m-2; i >-1;i--){
            if (!flag) {if (a[i]<a[i+1]) flag = true;}
            else if(a[i]>a[i+1]) break;
        }
        a.clear();
        cout << i+1<<"\n";
    }
}
