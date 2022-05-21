#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, aux, i, j;
    string row;
    vector<string> tablero;
    bool flag;
    cin >> n;
    aux = n;
    while(n--) {
        cin >> row;
        tablero.push_back(row);
    }
    flag = 1;
    for (i = 0; i < aux && flag; i++) {
        for(j = 0; j < aux; j++) {
            if(((i == 0 && (j == 0 || j == aux - 1) || i >= aux - 2)) && tablero[i][j] == '.') {
                flag = 0;
            } else if(tablero[i][j] == '.') {
                if(tablero[i + 1][j] == '.' && tablero[i + 1][j - 1] == '.' && tablero[i + 1][j + 1] == '.' && tablero[i + 2][j] == '.') {
                    tablero[i][j] = '#';
                    tablero[i + 1][j] = '#';
                    tablero[i + 1][j - 1] = '#';
                    tablero[i + 1][j + 1] = '#';
                    tablero[i + 2][j] = '#';
                } else
                    flag = 0;
            }
        }
    }
    cout << ((flag) ? "YES\n" : "NO\n");
    return 0;
}
