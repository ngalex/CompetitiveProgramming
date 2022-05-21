#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,C,op;
    cin>>N;
    vector<int> operaciones;
    while(N){
        cin>>C;
            while(C){
                cin>>op;
                if(op){
                    operaciones.push_back(op);
                }
                else{
                    cout<< operaciones[operaciones.size()-1] <<"\n";
                    operaciones.pop_back();
                }
                C--;
            }
        N--;
    }
    return 0;
}
