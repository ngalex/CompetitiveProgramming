#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,n;
    string p,word;
    bool flag = false;
    map<string,int> words;
    map<string,int>::iterator it;
    cin>>t;
    while(t--){
        cin>>n;
        getline(cin,p);
        stringstream iss(p);
        while(n--)
        {
            iss >> word;
            ++words[word];
            if(words[word]>1)flag=true;
        }
        it=words.begin();
        if(!flag){
            p=words.begin()->first;
            while(it!=words.end()){
                if(p>it->first)p=it->first;
                it++;
            }
        }else{
            while(it!=words.end()){
                if(n<it->second) {
                    p=it->first;
                    n=it->second;
                }
                it++;
            }
        }
        cout<<p<<"\n";
        words.clear();
    }
}
