#include <bits/stdc++.h>
using namespace std;
int32_t toDec(string n, string b){
    int32_t dec = 0;
    int i=n.size();
    if(b=="bin"){
        while(i>0){
            if(n[n.size()-i]!='0')dec+=((int)n[n.size()-i]-48)*pow(2,i-1);
            i--;
        }
    }
    if(b=="hex"){
        map<char,int> hexToDec = {
            {'0', 0},
            {'1', 1},
            {'2', 2},
            {'3', 3},
            {'4', 4},
            {'5', 5},
            {'6', 6},
            {'7', 7},
            {'8', 8},
            {'9', 9},
            {'a', 10},
            {'b', 11},
            {'c', 12},
            {'d', 13},
            {'e', 14},
            {'f', 15}
        };
        while(i>0){
            if(n[n.size()-i]!='0')dec+=hexToDec[n[n.size()-i]]*pow(16,i-1);
            i--;
        }
    }
    return dec;
}

string toBin(string n, string b, map<string,string> dig){
    string bin ="";
    if(b=="dec"){
        int dec=atoi(n.c_str());
        while(dec){
            bin=to_string(dec%2)+bin;
            dec/=2;
        }
    }
    if(b=="hex"){
        string s;
        for(int i=0;i<n.size();i++){
            s = n[i];
            bin+=dig[s];
        }

        while(bin[0]=='0'){
            bin.erase(bin.begin());
        }
    }
    return bin;
}
string toHex(string n, string b, map<string,string> dig){
    string hex = "";
    if(b=="dec"){
        int dec=atoi(n.c_str());
        map<int,string> decToHex = {
            {10,"a"},
            {11,"b"},
            {12,"c"},
            {13,"d"},
            {14,"e"},
            {15,"f"}
        };
        while(dec){
            if(dec%16<10)hex = to_string(dec%16) + hex;
            else hex = decToHex[dec%16] + hex;
            dec/=16;
        }
    }
    if(b=="bin"){
        int s=n.size();
        while(s%4!=0){
            n="0"+n;
            s++;
        }
        while(n.size()!=0){
            hex += dig[n.substr(0,4)];
            n.erase(n.begin(),n.begin()+4);
        }
    }
    return hex;
}
const map<string,string> dig={
        {"0","0000"},
        {"1","0001"},
        {"2","0010"},
        {"3","0011"},
        {"4","0100"},
        {"5","0101"},
        {"6","0110"},
        {"7","0111"},
        {"8","1000"},
        {"9","1001"},
        {"a","1010"},
        {"b","1011"},
        {"c","1100"},
        {"d","1101"},
        {"e","1110"},
        {"f","1111"},
        {"0000","0"},
        {"0001","1"},
        {"0010","2"},
        {"0011","3"},
        {"0100","4"},
        {"0101","5"},
        {"0110","6"},
        {"0111","7"},
        {"1000","8"},
        {"1001","9"},
        {"1010","a"},
        {"1011","b"},
        {"1100","c"},
        {"1101","d"},
        {"1110","e"},
        {"1111","f"}
    };
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,i;
    string n,b;
    i = 1;
    cin>>t;
    while(i <= t){
        cin>>n>>b;
        if (b == "bin") cout<<"Case "<<i<<":\n"<<toDec(n,b)<<" dec\n"<<toHex(n,b,dig)<<" hex\n\n";
        if (b == "dec") cout<<"Case "<<i<<":\n"<<toHex(n,b,dig)<<" hex\n"<<toBin(n,b,dig)<<" bin\n\n";
        if (b == "hex") cout<<"Case "<<i<<":\n"<<toDec(n,b)<<" dec\n"<<toBin(n,b,dig)<<" bin\n\n";
        i++;
    }
    return 0;
}

/*
2
322705 dec
113393 dec
1001110110010010001 bin
*/
