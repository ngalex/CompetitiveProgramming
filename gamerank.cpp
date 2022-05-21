#include <bits/stdc++.h>
using namespace std;
int rankop(int &stars, int maxstars, int op, int rango) {
    if(rango == 0) return 0;
    else if(op == 1) {
        stars ++;
        if(stars > maxstars) {
            stars = stars -maxstars;
            return -1;
        } else
            return 0;
    } else {
        cout << -1 <<endl;
        if(rango < 21) {
            stars--;
            if(stars < 0) {
                if(rango == 20) {
                    stars = 0;
                    return 0;
                }else{
                stars += maxstars;
                return 1;
                }
            }else return 0;
        }else return 0;
    }
}

int main() {
    int i, rango, stars, bonus;
    string games;
    cin >> games;
    rango = 25;
    stars = 0;
    bonus = 0;
    for(i = 0; i < games.length(); i++) {
        if(games[i] == 'W') {
            if(rango > 5) {
                bonus++;
            } else {
                bonus = 0;
            }
            if(rango > 20) {
                rango += rankop(stars, 2, 1, rango);
            }
            else if(rango > 15) {
                rango += rankop(stars, 3, 1, rango);
            }
            else if(rango > 10) {
                rango += rankop(stars, 4, 1, rango);
            } else if (rango > 0) {
                rango += rankop(stars, 5, 1, rango);
            }

        } else {
            bonus = 0;
            if(rango > 20) {
                rango += rankop(stars, 2, -1, rango);
            }
            else if(rango > 15) {
                rango += rankop(stars, 3, -1, rango);
            }
            else if(rango > 10) {
                rango += rankop(stars, 4, -1, rango);
            } else if (rango > 0) {
                rango += rankop(stars, 5, -1, rango);
            }
        }
        cout << rango<<" "<<stars << endl;
    }
    (rango == 0) ? cout << "Legend\n" : cout << rango << "\n";
    return 0;
}
