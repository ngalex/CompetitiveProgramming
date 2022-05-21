#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,n,i,j,c,p;
    vector<vector<int>> matrix;
    cin>>t;
    while(t--){
        cin>>i>>j;
        for(c=0;c<i;c++){
            matrix.push_back({});
            for(p=0;p<j;p++){
                cin>>n;
                matrix[c].push_back(n);
            }
        }
        for(c=i-1;c>=0;c--){
            for(p=j-1;p>=0;p--){
                (p>0)?cout<<matrix[c][p]<<" ":cout<<matrix[c][p]<<"\n";
            }
        }
        matrix.clear();
    }
    return 0;
}
