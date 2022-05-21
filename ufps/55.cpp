#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    vector<pair<int,int>> coord;
    int X,Y,W,Z,mov;

    while(cin >> X >> Y >> W >> Z && ((X + Y + W + Z) != 0)){
        mov = 0;
        coord.push_back({X,Y});
        coord.push_back({W,Z});
        while(coord[0] != coord[1]){
            if(coord[0].first==coord[1].first || coord[0].second == coord[1].second){
                coord[0] = coord[1];
                mov++;
            }else{
                (abs(coord[0].first - coord[1].first) == abs(coord[0].second - coord[1].second))? mov++ : mov=2;
                coord[0] = coord[1];
            }
        }
        cout << mov << "\n";
        coord.clear();
    }
}
