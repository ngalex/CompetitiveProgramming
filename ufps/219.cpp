#include <bits/stdc++.h>
#include <string>
#include <map>
using namespace std;
int main(){
    int D,j,i,m;
    string N;
    string C;
    map<int,vector<string>> B;
    vector<vector<string>> braile;
B={
        {0,{".*","**",".."}},
        {1,{"*.","..",".."}},
        {2,{"*.","*.",".."}},
        {3,{"**","..",".."}},
        {4,{"**",".*",".."}},
        {5,{"*.",".*",".."}},
        {6,{"**","*.",".."}},
        {7,{"**","**",".."}},
        {8,{"*.","**",".."}},
        {9,{".*","*.",".."}}
    };

    while(cin>>D && D!=0){
        cin>>C;
        if(C=="S"){
            cin>>N;
            j=0;
            while(j<3){
                for(i=0; i!=N.size();i++){
                    C=N[i];
                    m=stoi(C);
                    if(i!=N.size()-1){
                        cout<<B[m][j]<<" ";}
                    else{
                        cout<<B[m][j]<<"\n";
                    }
                }
                j++;
            }
        }else{
            j=0;
            i=0;
            while(j<3){
                    while(i<D){
                        cin>>N;
                        braile[i][j].push_back(N);
                        i++;
                    }
                j++;
            }

        }


    }
    return 0;
}
