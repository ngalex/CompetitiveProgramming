#include <bits/stdc++.h>
#include <map>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int digitos,col,fila;
    map<int,string> braile;
    vector<string> inbraile;
    string D,C;
    braile={
        {1,"*....."},
        {2,"*.*..."},
        {3,"**...."},
        {4,"**.*.."},
        {5,"*..*.."},
        {6,"***..."},
        {7,"****.."},
        {8,"*.**.."},
        {9,".**..."},
        {0,".***.."},
    };
    while(cin>>digitos && digitos!=0){
        cin>>D;
        if(D=="S"){
            cin>>C;
            fila=3;
            col=0;
            while(fila){
                for(int i=0;i<digitos;i++){
                    (i!=C.size()-1)?
                        cout<<braile[(int)C[i]-48][col]<<braile[(int)C[i]-48][col+1]<<" ":
                        cout<<braile[(int)C[i]-48][col]<<braile[(int)C[i]-48][col+1]<<"\n";
                }
                col+=2;
                fila--;
            }
        }else{
            fila=3;
            while(fila){
                for(col=0;col<digitos;col++){
                    cin>>C;
                    if(inbraile.size()<digitos){
                        inbraile.push_back(C);
                    }else{
                        inbraile[col]+=C;
                    }
                }
                fila--;
            }
            for(int i=0;i<inbraile.size();i++){
                for(map<int,string>::iterator it=braile.begin();it!=braile.end();++it){
                    if(inbraile[i]==it->second){
                        (i!=inbraile.size()-1)?cout<<it->first:cout<<it->first<<"\n";
                    }
                }

            }
        }
    }
    return 0;
}
