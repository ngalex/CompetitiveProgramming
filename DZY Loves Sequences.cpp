#include <bits/stdc++.h>

using namespace std;
vector<int> nums;
int dec(int i) {
    if (i == 0) return 0;
    else if (abs (nums[i-1] - nums[i]) == 1) return 1 + dec(i+1);
    else return 0;
}

int incr(int i) {
    if (i == 0) return 0;
    else if (abs (nums[i+1] - nums[i]) == 1) return 1 + dec(i+1);
    else return 0;
}

int main() {
    int n,m, res = 0, num;
    m = n;
    while (m--) {
        cin>> num;
        nums.push_back(num);
    }
    for(int i = 0; i< n; i++) {
        for(int j = 0; j < n; j++){

        }
    }

}
