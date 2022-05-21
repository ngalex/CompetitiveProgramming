#include <bits/stdc++.h>

using namespace std;
int main(){
    int N,i;
    pair<int,int> mayor;
    i=1;
    while(i<101){
        cin>>N;
        if(mayor.first < N ){
            mayor.first=N;
            mayor.second=i;
        }
        i++;
    }
    cout<<mayor.first<<"\n";
    cout<<mayor.second<<"\n";
    return 0;
}
