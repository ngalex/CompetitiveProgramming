#include <bits/stdc++.h>

using namespace std;

int main () {
    int n,num,m, sere = 0, dima = 0; cin>>n;
    vector <int> nums;
    m = n;
    while (m--) {
        cin >> num;
        nums.push_back(num);
    }
    int i = 0, j =  n-1;
    bool flag = false;
    while (i <= j) {
        if (nums[i] > nums[j]) {

            if (!flag) {sere += nums[i]; flag = true;}
            else {dima += nums[i]; flag = false;}
            i++;
        }
        else {
            if (!flag) {sere += nums[j];flag = true;}
            else {dima += nums[j]; flag = false;}
            j--;
        }
    }

    cout << sere <<" " << dima << "\n";
}
