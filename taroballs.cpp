#include <bits/stdc++.h>
using namespace std;

class TaroBalls {

    public:
        string getWinner(int R, int B){
            if (R != B) return "Taro"; else return "Friend";
        }
        TaroBalls () {}
};

int main() {
    int a,b;
    cin>>a>>b;
    TaroBalls tb;
    cout << tb.getWinner(a,b)<<endl;

}
