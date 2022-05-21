#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,cant,i;
    vector<int> coord;
    cin>>N;
    while(N){
        coord.push_back(0);
        coord.push_back(0);
        cin>> cant;
        while(cant){
            cin>>i;
            if(i==1){
                coord[1]++;
            }
            if(i==2){
                coord[1]--;
            }
            if(i==3){
                coord[0]--;
            }
            if(i==4){
                coord[0]++;
            }
            cant--;
        }
        cout<<coord[0]<<","<<coord[1]<<"\n";
        coord.clear();
        N--;
    }
    return 0;
}

