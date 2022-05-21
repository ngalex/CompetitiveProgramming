#include <bits/stdc++.h>
#include <map>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, set<string>> perro;
    map<string, set<string>>:: iterator it;
    string raza, color;
    int N;
    cin>>N;
    while(N){
        cin>> color>> raza;
        perro[raza].insert(color);
        N--;
        }
    it = perro.begin();

    cout<<perro.size()<<"\n";
    while(it != perro.end()){
        cout<<it->first<< " " <<it->second.size()<<"\n";
        it++;
    }

    return 0;
}
