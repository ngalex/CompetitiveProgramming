#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, elemt, i;
    vector<int> conector;
    vector<int> toma;
    cin>>N;
    while(N){
        i = 0;
        while(i!=6){
            cin>>elemt;
            conector.push_back(elemt);
            i++;
        }
        i=0;
        while(i!=6){
            cin>>elemt;
            toma.push_back(elemt);
            i++;
        }

        while(i){
            i--;
            if(conector[i]==toma[i]){break;}
        }
        if(i == 0){cout<<"COMPATIBLE"<<"\n";}else{cout<<"INCOMPATIBLE"<<"\n";}

        conector.clear();
        toma.clear();
        N--;
    }
    return 0;
}
