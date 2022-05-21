#include <bits/stdc++.h>
#include <deque>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    deque<int> nums;
    int N,B,C,T;
    cin>>N;
    while(N){
        cin>>B>>C;
        while(B){
            cin>>T;
            nums.push_back(T);
            B--;
        }
        while(C){

        nums.push_back(nums[0]);
        nums.pop_front();
            C--;
        }
        for(int i=0; i<nums.size();i++){
            (i==nums.size()-1)?cout<<nums[i]<<"\n":cout<<nums[i]<<" ";
        }
        nums.clear();
        N--;
    }

    return 0;
}
