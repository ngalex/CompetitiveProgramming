
#include <bits/stdc++.h>
using namespace std;

struct vec {
    int a;
    int b;
    int M;
};
int main() {
    int n,a,b, R;
    int ppM,mmM,pmM,mpM;
    map<int, vector<vec>> pp,mm,pm,mp;
    vector<vec> allVectors;
    vec aux;
    cin>>n;
    while(n--) {
        cin>>a>>b;
        aux.a = a;
        aux.b = b;
        aux.M = sqrt(a*a+b*b);
        allVectors.push_back(aux);
        if (a >= 0 && b > 0) {pp[aux.M]->first.push_back(aux); ppM += aux.M;}
        else if(a < 0 && b>==) {mp[aux.M]->second.push_back(aux);mpM += aux.M;}
        else if(a <= 0 && b < 0) {mm[aux.M]->second.push_back(aux);mmM += aux.M;}
        else {pm[aux.M]->second.push_back(aux);pmM += aux.M;}
    }




}
