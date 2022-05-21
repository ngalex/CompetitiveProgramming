#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    string s;
    deque<string> words;
    cin>>t;
    while(t--){
        cin>>s;
        if(s=="POP"){
            if(!words.size()){
                cout<<"-"<<"\n";
                continue;
            }
            cout<<words[words.size()-1]<<"\n";
            words.pop_back();
        }else{
            cin>>s;
            words.push_back(s);
        }
    }
    return 0;
}
