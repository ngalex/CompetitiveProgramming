#include <bits/stdc++.h>

using namespace std;

/*int main() {
    int n, num;
    set<int> board;
    cin>>n;
    while(n--){
        cin>>num;
        board.insert(num);
    }
    int mid = (board.size()-1)/2;

    for(auto &x: board) { if(mid == 0) cout << x <<endl; mid--; }
}*/

int main() {
    int n, num;
    vector<int> board;
    cin>>n;
    while(n--){
        cin>>num;
        board.push_back(num);
    }
    sort(board.begin(), board.end());
    int mid = (board.size()-1)/2;
    cout << board[mid]<<endl;
}
