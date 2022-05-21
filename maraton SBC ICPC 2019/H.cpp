#include <bits/stdc++.h>
using namespace std;
int main(){
    int v, n;
    cin>>v>>n;
    int total= v*n;
    cout << fixed << setprecision(0) << ceil(total * 0.1) << " " <<
    ceil(total * 0.2) << " " <<
    ceil(total * 0.3) << " " <<
    ceil(total * 0.4) << " " <<
    ceil(total * 0.5) << " " <<
    ceil(total * 0.6) << " " <<
    ceil(total * 0.7) << " " <<
    ceil(total * 0.8) << " " <<
    ceil(total * 0.9) << "\n";
    return 0;
}
