#include <bits/stdc++.h>
using namespace std;
double cosine(double param) {
    return cos(param * 3.14159265 / 180);
}
double acosine(double param) {
    return (acos(param) * 180 / 3.14159265 );
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int s1, s2, s3, s4, a, b, c, d;
    double ans, aux;
    cin >> s1 >> s2 >> s3 >> s4;
    if(s1 + s2 + s3 + s4 == 4 * s1) {
        cout << s1*s1 << "\n";
        return 0;
    }
    vector<int> sorted;
    sorted = {s1, s2, s3, s4};
    sort(sorted.begin(), sorted.end());
    if(sorted[0] == sorted[1] && sorted[2] == sorted[3]) {
        cout << sorted[0]*sorted[2] << "\n";
        return 0;
    }
    a = sorted[1];
    b = sorted[0];
    c = sorted[2];
    d =  sorted[3];
    aux = (a * a + pow(d - b, 2) - c * c) / (2 * a * (d - b));
    aux = acosine(aux);
    ans = 0.5 * (b + d) * a * cosine(90 - aux);
    cout << setprecision(16) << ans << endl;
    return 0;
}
