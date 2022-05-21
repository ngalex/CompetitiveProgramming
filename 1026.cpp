#include <bits/stdc++.h>
using namespace std;

string intToBin(long a) {
    if(a > 0)
    if (a % 2 == 0) {
         return intToBin(a/2) + "0";
    } else { return intToBin(a/2) + "1";}
    else return "";
}

string binSum(string num1, string num2) {
    string res,a,b = "";
    long aux = min(num1.length(), num2.length());
    long d = num1.length()-num2.length();
    if(num1.length()!=  num2.length())
        if(num1.length() > num2.length()) {b = num1; a = num2; res += num1[0]; }
        else {a = num1, b = num2; res += num2[0];}
    else {
        a = num1;
        b = num2;
    }
    for(int i = aux -1; i > -1; i--) {
        if(a[i] == b[i+abs(d)]) res = "0" + res;
        else res = "1" + res;
    }
    return res;
}

long binToInt(string num) {
    long res = 0;
    for(int i = num.length(); i > 0; i--) {
        if (num[i-1] != '0') res += pow(2, num.length() - i);
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long a,b;
    while (!cin.eof()) {
        cin >>a>>b;
        //cout << binSum(intToBin(a), intToBin(b)) <<endl;
        //cout << (intToBin(a) + " " + intToBin(b)) <<endl;
        cout << binToInt(binSum(intToBin(a), intToBin(b))) << endl;
    }
}
