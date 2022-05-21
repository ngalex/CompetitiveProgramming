#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,k;
    vector <int> hotel;
    hotel.resize(10);
    string events;
    cin >> n>> events;
    for ( i =0; i< events.size();i++){
        if(events[i] == 'L'){
            for ( k=0;k<10;k++){
                if(!hotel[k]) {hotel[k] = 1; break;}
            }
        } else if(events[i] == 'R'){
            for ( k=9;k>-1;k--){
                if(!hotel[k]) {hotel[k] = 1; break;}
            }
        }else{
            hotel[events[i]-'0']=0;
        }
    }
    for(i = 0;i<hotel.size();i++) cout << hotel[i];
    cout << "\n";

}
