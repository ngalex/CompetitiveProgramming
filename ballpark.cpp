#include <bits/stdc++.h>
using namespace std;
long long int pot(long long int n, int exp){
    if (exp == 0){
        return 1;
    }else {
        return n*pot(n,exp-1);
    }
}

int main() {
    long long int n,tens;
    string res;
    cin >>n;
    tens = pot(10, log10(n));
    res = to_string((long long int)round((double)n/tens)*tens);
    cout <<res << endl;
    return 0;
}
