#include <bits/stdc++.h>
using namespace std;
int main() {
    string num;cin>>num;
    string pint,pfloat;
    map <char,int> getNum = {
        {'0',0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},
        {'6',6},{'7',7},{'8',8},{'9',9}
    };
    int i = 1;
    while(num[i] != '.' && i <= num.length()) i++;
    pint = num.substr(0,i);
    pfloat = num.substr(i+1, num.length()-i-1);

    if (getNum[pint[pint.length()-1]] != 9) {
        if (getNum[pfloat[0]] < 5 ) {
            cout << pint << endl;
        } else {
            cout << pint.substr(0, pint.length()-1) + to_string(getNum[pint[pint.length()-1]] + 1) << endl;
        }
    } else {
        cout << "GOTO Vasilisa." << endl;
    }
}
