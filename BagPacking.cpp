#include <bits/stdc++.h>
using namespace std;

class BagPacking {
public:
    int minPay(vector<int> bagsizes){
        int res = 0;
        int n = bagsizes.size();
        sort(bagsizes.begin(),bagsizes.end());
        vector <int> used(n, 0);
        int counterUsed = n;
        int s;
        while (counterUsed) {
            s = 101;
            for (int i = n-1; i>-1; i--){
                if (used[i] == 0) {
                    if(bagsizes[i] < s) {
                        s =bagsizes[i];
                        used[i] = 1;
                        counterUsed--;
                    }
                }
            }
            res++;
        }

        return res;
    }

};
int main() {
    BagPacking bp;
    cout << bp.minPay({8,2})<<endl;

}
