#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    string rest,item;
    map<string, vector<string>> restaurantes;
    vector<string> res, items;
    cin>>n;
    while(n--){
        cout<<"here"<<endl;
        cin>>k>>rest;
        //restaurantes[rest]={};
        while(getline(cin, item) && k--) {
            //char input[100];
            //cin.getline(input,sizeof(input));
            //cin>>item;
           // char menu[100];
          // cin.getline(menu,100);
            items.push_back(item);

            //restaurantes[rest]->second.push_back(item);
        }
        int count = 0;
        for(int i; i<items.size() && count < 2; i++){
            if(items[i].find("pea soup") != std::string::npos) count++;
            if(items[i].find("pancakes") != std::string::npos) count++;
        }
        if(count > 1) res.push_back(rest);
        for(auto &x: items) cout << x<<endl;
        item.clear();
    }
    for(auto &x: res) cout << x<<endl;

    /*int count = 0;
    for(restaurantes::iterator it; it != restaurantes.end(); it++){
        if (find(it->second, it->second.begin(), it->second.end()) != )
    }*/

}
