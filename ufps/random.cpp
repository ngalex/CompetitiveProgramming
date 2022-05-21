#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector<pair<int,int>> solutions;
    pair<int,int> solution;
    vector<int> prices;
    int N,M,d;
    while(cin>>N){
        //cin>>N;
        while(N){
            cin>>d;
            prices.push_back(d);
            N--;
        }
        cin>> M;
        cout<<"\n";
        d = M;
        for(int i=0; i<prices.size();i++){
            for(int j=0; j<prices.size() && i!=j;j++){
                if(prices[j]+prices[i]==M){
                    if(abs(prices[i]-prices[j])<d){
                        solution={prices[i],prices[j]};
                        d=abs(prices[i]-prices[j]);
                    }

                }
            }
        }
        solutions.push_back(solution);
        prices.clear();
    }

    for(int i=0;i<solutions.size();i++){
            cout<<"Peter should buy books whose prices are "<<solutions[i].first<<" and "<<solutions[i].second<<"."<<"\n\n";
    }

    return 0;
}
