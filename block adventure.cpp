#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,i, n,m,k,h;
    int j;
    vector <int> colums;
    cin >> t;
    while(t--){
        cin>> n>>m>>k;
        while(n--){
            cin>> h;
            colums.push_back(h);
        }
        h = 1;
        for(i = 0; i< colums.size()-1;i++){
            //cout << colums[i] << " < " << colums[i+1] << endl;
            if(colums[i]<colums[i+1] && abs(colums[i]-colums[i+1])>k){
                //cout << "here" <<endl;
                if(abs(colums[i]+m-colums[i+1])<=k){
                    while(abs(colums[i]-colums[i+1])!=k) {colums[i]++;m--;}
                }else{
                    h = 0;
                }
            }else{
                m += k - colums[i+1];
                colums[i] -= k - colums[i+1];
                //cout << "here2 pos:" << i << " y abs:" << abs(colums[i]-colums[i+1])  <<endl;
                //while(abs(colums[i]-colums[i+1])!=k || colums[i]>colums[i+1]){colums[i]--;m++;};
            }
            for (j=0; j<colums.size();j++){
                cout <<colums[j] << " ";
            } cout << endl;
            if(!h) break;
        }
        colums.clear();
        if(h)cout <<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
