#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,t;
    string word;
    set<string> words;
    set<string>::iterator it;
    cin>>t;
    while(t--){
        cin>>n;
        while(n--){
            cin>>word;
            words.insert(word);
        }
        it=words.begin();
        while(it!=words.end()){
            cout<<*it<<"\n";
            ++it;
        }
        cout<<"-"<<"\n";
        words.clear();
    }
    return 0;
}
