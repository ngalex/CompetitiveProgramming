#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    map<int,vector<int>> matriz;
    cin.tie(NULL);
    int n,m,p,i,j,c;
    cin>>n;
    while(n--){
        cin>>i>>j;
        c=0;
        while(c<i){
                p=j;
            while(p--){
                cin>>m;
                matriz[c].push_back(m);
            }
            c++;
        }
        for(c=0;c<i;c++)
            for(p=0;p<j;p++){
                if(c%2==0)matriz[c][p]++;
                if(p%2==0)matriz[c][p]+=2;
                if(c%2!=0 && p%2!=0)matriz[c][p]-=3;
            }
        c=0;
        while(c<i){
            p=0;
            while(p<j){
                (p<j-1)?cout<<matriz[c][p]<<" ":cout<<matriz[c][p]<<"\n";
                p++;
            }
            c++;
        }
        matriz.clear();
    }
    return 0;
}
