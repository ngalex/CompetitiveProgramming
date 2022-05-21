#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,w,x,deltaT=0,deltaA =0, res;
    vector<int> pat;
    cin >> a>>b>>w>>x>>c;
    int k = w;
    int aux;
    if (c <= a) cout << 0 <<"\n";
    else if (x == 0 ) cout << c-a<<"\n";
    else {
        aux = b;res = 0;
        while (k--) {
            deltaT++;
            if (aux >= x) { aux -=x; }
            else {aux = w - (x-aux); deltaA++;}
        }
        if ((a-deltaA) <  (c-deltaT)) {
            while ((a-deltaA) <  (c-deltaT)) {
                res +=deltaT;
                a-=deltaA;
                c-=deltaT;
            }
        }
        while (a < c) {
                res++;
                c--;
                if (b >= x) { b -=x; }
                else {a--; b = w - (x-b);}
            }
        cout << res<<"\n";
    }

}
