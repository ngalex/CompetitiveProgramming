#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> v;
    int N;
    string T;
    cin>>N;
    while(N){
        cin>>T;
        v.push_back(T);
        cin>>T;
        v.push_back(T);
        (v[0].length()-1 < v[1].length()-1)?cout<<"no"<<"\n":cout<<"go"<<"\n";
        v.clear();
        N--;
    }
    return 0;
}
