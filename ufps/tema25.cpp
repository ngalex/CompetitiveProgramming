#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,B,reg,placa;
    vector<int> buses;
    cin>>N;
    while(N){
    cin>>B;
        while (B){
            cin>>reg>>placa;
            B--;
            if (reg==1){buses.push_back(placa);
            }
            if (reg==2){cout<<buses[0]<<"\n";
                buses.erase(buses.begin());}
            }

    N--;
    }
    return 0;
    }

