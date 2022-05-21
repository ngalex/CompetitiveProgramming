#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int p,n,idx, idm,idM;
    vector<int> students;
    cin >> p;
    while(p--){
        cin>>n;
        for (int i = 0; i<n;i++){
            cin >> idx;
            if(idx == 1) idm = i;
            if(idx == n) idM = i;
            students.push_back(idx);
        }
        for(int i = 1; i<=n;i++){
            idx = find (students.begin(),students.end(),i)
            if (!idx && (students[idx+1] == students[idx]+1 || students[n-1] == students[idx]+1))
                continue
            else if (idx == n-1 && (students[n-2] == students[idx]+1 || students[n-1] students[idx]-1 || students[0] == students[idx]+1 || students[0] == students[idx]-1))
                continue;
            else if (students[idx+1] == students[idx]+1 || students[idx+1] students[idx]-1 || students[idx-1] == students[idx]+1 || students[idx-1] == students[idx]-1)
                continue;
            else {
                cout << "NO\n";
                break;
            }
        }
        cout<<"YES\n";
    }
    return 0;
}
