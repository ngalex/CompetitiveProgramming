#include <bits/stdc++.h>
using namespace std;
int main(){
    string sentence,s;
    char inicial;
    bool flag;
    while (getline(cin,sentence) && sentence != "*"){
        flag = 1;
        istringstream ss(sentence);
        inicial = sentence[0];
        ss >> s;
        while(ss){
            if(s[0] != toupper(inicial,locale()) && s[0] != tolower(inicial,locale())) flag = 0;
            ss >> s;
            string s;
        }
        (flag)?cout<<"Y":cout<<"N";
        cout<<"\n";
    }
    return 0;
}
