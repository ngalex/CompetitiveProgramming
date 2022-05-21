#include <bits/stdc++.h>
using namespace std;

struct cell{
    int cost;
    bool flag = 1;
};

int main(){
    int n,num, res;
    cin>>n;
    cell race[n][n];
    for(auto &x: race){
        for(auto y: x){
            cin >>num;
            cell aux;
            aux.cost = num;
            y = aux;
        }
    }
    int i = 1, j = 1;
    res = 0;
    while (i != n && j != n) {
        res += race[i][j].cost;
        race[i][j].flag = 0;
        if(race[i][j+1].cost > race[i+1][j].cost) j++; else i++;
    }


}
