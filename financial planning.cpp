#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    long long int m, p, c, dias, i, aux, j,k;
    //pair<long long int, long long int> best_inv;
    vector<pair<long long int, long long int>> inverciones;
    cin >> n >> m;
    while(n--) {
        aux = 0;
        cin >> c >> p;
        inverciones.push_back({c, p});
        for(i = 1 ; aux < m;i++){
            aux = i*c - p;
        }
        dias = i-1;
        cout << dias <<endl;
        j=2;
        while(j < dias){
            for(k = 1 ; aux < m;k++){
                aux =  k*j*c-j*m;

            }
            cout << k-1 << endl;
            dias  = min(k-1,dias);
            j++;
        }



    cout << dias << endl;

    }
    return 0;
}
