#include <bits/stdc++.h>
using namespace std;
class Hash {
    private:
        int hash_size;
        list<int> *table;
    public:
        void insertElement(int n);

        void showElements();

        Hash(int n);

};
Hash::Hash(int n){
    this->hash_size = n;
    table = new list<int>[this->hash_size];
}

void Hash::insertElement(int n){
    table[n % this->hash_size].push_back(n);
}

void Hash::showElements(){
    for (int i = 0 ; i < this->hash_size ; i++){
        cout << i << " -> ";
        for(auto &x : table[i]){
            cout << x << " -> ";
        }
        cout <<"\\\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,m,n,c;
    cin >> t;
    while(t--){
        cin >> n >> m;
        Hash ht(n);
        while(m--){
            cin >> c;
            ht.insertElement(c);
        }
        ht.showElements();
        if(t != 0)cout<<"\n";
    }
    return 0;
}
