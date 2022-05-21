#include <bits/stdc++.h>

using namespace std;
    bool flag = false;
    vector<string> strs;

bool findstr(string str1){
    string strbig, strsmall;
    for(int i = 0; i < strs.size();i++){
        if(strs[i].size() < str1.size()) {strbig = str1; strsmall = strs[i];} else {strbig = strs[i];strsmall = str1;}
            if(strbig.find(strsmall) != std::string::npos) {
                cout << "BAD SET\n" + str1 + "\n";
                return true;
            }
    }
    return  false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string str;
    cin>>n;
    while(n--) {
        cin >> str;
        if(!flag) flag = findstr(str);
        strs.push_back(str);
    }
    if(!flag) cout << "GOOD SET\n";
}
