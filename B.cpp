
#include <bits/stdc++.h>
using namespace std;
int main(){
    string pal;
    int n;
    cin>>pal;
    n=pal.size();
    for(int i=0; i<pal.size();i++){
        if(pal[i]!=pal[0])break;
        if(i==pal.size()-1){
            cout<<"Impossible";
            return 0;
        }
    }
    (n%2==0)?cout<<"1"<<"\n":cout<<"2"<<"\n";
    return 0;
}
