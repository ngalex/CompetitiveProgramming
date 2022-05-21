//adhoc
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m,s,i,j,ans;
    string row;
    pair<int,int> aux;
    vector<pair<int,int>> pilars;
    vector<pair<int,int>> stickers;
    vector<pair<int,int>> ::iterator it;
    pair<int,pair<int,int>> robot;
    while(cin >> n >> m >> s && (n + m + s != 0)){
        ans = 0;
        i = 0;
        while(i < n){
            cin >> row;
            for (j = 0 ; j < m ; j++){
                if(row[j] != '.'){
                    if(row[j] ==  '*') stickers.push_back({i,j});
                    else if(row[j] == '#') pilars.push_back({i,j});
                        else{
                            if(row[j] == 'N') robot.first = 0;
                            if(row[j] == 'O') robot.first = 3;
                            if(row[j] == 'S') robot.first = 2;
                            if(row[j] == 'L') robot.first = 1;
                            robot.second = {i,j};
                        }
                }
            }
            ++i;
        }
        cout<<pilars.size()<<endl;
        cout<<stickers.size()<<endl;
        cin >> row;
        for (i = 0 ; i < s ; i++){
            if(row[i] ==  'F'){

                aux = robot.second;
                if(robot.first == 0 && robot.second.first > 0) robot.second.first--;
                if(robot.first == 2 && robot.second.first < n) robot.second.first++;
                if(robot.first == 3 && robot.second.second > 0) robot.second.second--;
                if(robot.first == 1 && robot.second.second < m) robot.second.second++;
                if(find(pilars.begin(),pilars.end(), robot.second) != pilars.end()) robot.second = aux;
                else{
                    it = find(stickers.begin(),stickers.end(),robot.second);
                    if(it != stickers.end()){
                        stickers.erase(it);
                        ans++;
                    }
                }
            }
            if(row[i] == 'E'){
                if(robot.first == 0)robot.first =  3;
                else --robot.first;
            }
            if(row[i] == 'D'){
                if(robot.first == 3) robot.first = 0;
                else ++robot.first;
            }
        }
        cout << ans << "\n";
        stickers.clear();
        pilars.clear();
    }
    return 0;
}
/*
N -> i+ / j
S -> i- / j
E -> i / j+
O -> i / j-
 N   0
O E 3 1
 S   2
*/
