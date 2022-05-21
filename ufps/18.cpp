#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<int> nums;
    int n,i;
    cin>>n;
    while(n--){
        cin>>i;
        nums.push_back(i);
    }
    while(nums.size()){
        cout<<*--nums.end()<<"\n";
        nums.pop_back();
    }

return 0;
}
