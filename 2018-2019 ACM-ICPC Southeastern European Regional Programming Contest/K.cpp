#include <bits/stdc++.h>
using namespace std;
int ans = 0;
vector<pair<int,int>> lospuntos;
struct rectangle{
    int x1,y1,x2,y2;
};
vector<rectangle> losrectangulos;

void updatePointsR(rectangle rect){
    for(int j = 0; j<lospuntos.size();j++){
        if(lospuntos[j].first <= rect.x2 && lospuntos[j].first >= rect.x1 && lospuntos[j].second <= rect.y2 && lospuntos[j].second >= rect.y1)
            ans ++;
    }
}
void updatePointsP(pair<int,int> point){
    for(int i = 0; i<losrectangulos.size(); i++){
        if(point.first <= losrectangulos[i].x2 && point.first >= losrectangulos[i].x1 && point.second <= losrectangulos[i].y2 && point.second >= losrectangulos[i].y1)
            ans ++;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    rectangle rect;
    int x1,x2,y1,y2;
    int n, opc;
    cin >> n;
    while(n--){
        cin >> opc;
        if(opc == 1) {
            cin >> x1 >> y1;
            lospuntos.push_back({x1,y1});
            updatePointsP({x1,y1});
        }else{
            cin >>x1>>y1>>x2>>y2;
            losrectangulos.push_back({x1,y1,x2,y2});
            updatePointsR({x1,y1,x2,y2});
        }
        cout <<ans<<"\n";
    }
    return 0;
}

/*
5
1 2 3
1 2 2
1 3 4
2 1 1 5 5
2 2 2 2 2


4
2 1 1 3 3
2 1 1 2 2
1 2 2
1 2 2


7
1 5 5
1 5 5
1 5 5
2 2 2 9 9
2 1 1 5 5
2 1 1 2 2
1 2 2

9
1 10 9
1 10 7
2 8 6 12 10
1 5 5
2 2 2 6 6
2 1 1 3 3
1 3 3
1 2 1
1 2 2

15
1 3 12
1 15 6
1 13 7
2 8 5 14 10
1 10 9
2 7 6 11 8
1 11 7
1 9 6
2 14 0 15 4
1 15 4
1 14 0
2 3 3 6 7
1 6 6
1 6 5
2  2 2 16 13

*/
