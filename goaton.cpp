#include <bits/stdc++.h>
using namespace std;
float dP(pair<float, float>a, pair<float, float> b) {
    float aux = pow(a.first - b.first, 2) + pow(a.second - b.second, 2);
    return (float)sqrtf(aux);
}
int main() {
    pair<float, float> c1, c2, c3, c4, P;
    set<float> mods;
    cin >> P.first >> P.second;
    cin >> c1.first >> c1.second;
    cin >> c2.first >> c2.second;
    float ans, aux;

    if(P.first >= c1.first && P.first <= c2.first) {
        ans = abs(P.second + (-1 * c1.second));
        aux = abs(P.second + (-1 * c2.second));
        if(aux < ans && aux)
            ans = aux;
    } else if(P.second >= c1.second && P.second <= c2.second) {
        ans = abs(P.first + (-1 * c1.first));
        aux = abs(P.first + (-1 * c2.first));
        if(aux < ans && aux)
            ans = aux;
    } else {
        c3 = {c1.first, c2.second};
        c4 = {c2.first, c1.first};
        mods.insert(dP(P, c1));
        mods.insert(dP(P, c2));
        mods.insert(dP(P, c3));
        mods.insert(dP(P, c4));
        ans = *(mods.begin()++);
    }
    cout << fixed << setprecision(3) << ans << "\n";
    return 0;
}
