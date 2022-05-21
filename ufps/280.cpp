#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    set<string> glosario;
    set<string>::iterator it;
    string w;
    int t,n;
    cin>> t;
    while(t--){
        cin>>n;
        while(n--){
            cin>>w;
            if(w.find(',')!=std::string::npos){
                w.erase(w.find(','));
            }
            if(w.find('.')!=std::string::npos){
                w.erase(w.find('.'));
            }
            if(w.find('?')!=std::string::npos){
                w.erase(w.find('?'));
            }
            if(w.find('!')!=std::string::npos){
                w.erase(w.find('!'));
            }
            glosario.insert(w);
        }
        cin>>w;
        it=glosario.begin();
        while(it!=glosario.end()){
            cout<<*it<<"\n";
            it++;
        }
        cout<<"-"<<"\n";
        glosario.clear();
    }
    return 0;
}
