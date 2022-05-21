#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    float R,resto;
    //int C;
    int i = 1;
    cin>>R;
    //C=R*100;
    /*while(((360*100*i)%C)!=0){
        i++;
    }*/
    while(fmod(360*i,R)!=0){
        i++;
    }
    cout<<360*i/R;
    return 0;
}

