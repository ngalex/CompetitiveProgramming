#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<string,string> original;
    string nom,firma;
    bool flag;
    int n,m,i;
    while(cin>>n && n!=0){
        while(n--){
            cin>>nom>>firma;
            original[nom]=firma;
        }
        cin>>n;
        m=0;
        while(n--){
            flag=0;
            i=0;
            cin>>nom>>firma;
            while(i<firma.size()){
                if(original[nom].at(i) != firma.at(i)){
                    if(flag){
                        m++;
                        i=firma.size();
                    }
                    flag=1;
                }
                i++;
            }
        }
        cout<<m<<"\n";
        original.clear();
    }
    return 0;
}
/*4
Chavo ChAvO
Kiko kikO
Nhonho NHONHO
Chilindrina CHIlindriNa
3
Chavo ChAvO
Kiko kIKO
Chilindrina CHIlindriNA
2
Jadson jadsON
Crishna Crishna
2
Crishna CRISHNA
Jadson JADson
0*/
