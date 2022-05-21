#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,m,cont;
    unsigned long long int elem;
    set<unsigned long long int> res;
    string op;
    vector<unsigned long long int> A,B;
    cin >> t;
    cont = 1;
    while(t--){
        cin>>n>>m>>op;
        while(n--){
            cin>>elem;
            A.push_back(elem);
        }
        while(m--){
            cin>> elem;
            B.push_back(elem);
        }
        cout << "Case " << cont << ": ";
        if(op == "union"){
            for(auto &x:A) res.insert(x);
            for(auto &x:B) res.insert(x);
            for(auto &x:res) cout<< x<<" ";
        }
        if(op == "intersection"){
            if(A.size()<=B.size()){
                for(int i = 0; i<A.size();i++){
                    if(find(B.begin(),B.end(),A[i])!=B.end()) res.insert(A[i]);
                }
            }else{
                for(int i = 0; i<B.size();i++){
                    if(find(A.begin(),A.end(),B[i])!=A.end()) {res.insert(B[i]);}
                }
            }
            for(auto &x : res) cout<< x<<" ";
        }
        if(op=="difference"){
            for(int i = 0; i < A.size();i++){
                if(find(B.begin(),B.end(),A[i]) == B.end()) res.insert(A[i]);
            }
            for(auto &x : res) cout<< x<<" ";
        }
        if(op == "symmetric_difference"){
            for(int i = 0; i < A.size();i++){
                if(find(B.begin(),B.end(),A[i]) == B.end()) res.insert(A[i]);
            }
            for(int i = 0; i < B.size();i++){
                if(find(A.begin(),A.end(),B[i]) == A.end()) res.insert(B[i]);
            }
            for(auto &x : res) cout<< x<<" ";
        }
        cout<<"\n";
        A.clear();
        B.clear();
        res.clear();
        cont++;
    }
    return 0;
}
