#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, twos, ones;
    twos = 0;
    ones = 0;
    cin >> n;
    while(n--) {
            cin >> a;
        (a == 2) ? twos++ : ones++;
    }

    if(twos > 0) {
        twos--;
        cout << "2 ";
        if(ones > 0) {
            ones--;
            cout << "1 ";
            while(twos--)
                cout << "2 ";
            while(ones--)
                cout << "1 ";
        } else {
            while (twos--)
                cout << "2 ";
        }
    } else
        while(ones--)
            cout << "1 ";
    cout << "\n";
    return 0;
}
