#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " <<(x) << endl
#define fori(i,n) for(i = 0; i < n; i++)
#define ll long long
using namespace std;
int MAXS=32;
/*map<string,int> nums = {
    {"00000",1},
    {"00001",1},
    {"00010",1},
    {"00011",1},
    {"00100",1},
    {"00101",1},
    {"00110",1},
    {"00111",1},
    {"01000",1},
    {"01001",1},
    {"01010",1},
    {"01011",1},
    {"01100",1},
    {"01101",1},
    {"01110",1},
    {"01111",1},
    {"10000",1},
    {"10001",1},
    {"10010",1},
    {"10011",1},
    {"10100",1},
    {"10101",1},
    {"10110",1},
    {"10111",1},
    {"11000",1},
    {"11001",1},
    {"11010",1},
    {"11011",1},
    {"11100",1},
    {"11101",1},
    {"11110",1},
    {"11111",1},
}*/

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	//intToBin(10,MAXS-1);
    int i,j,n;
    ll num;
    string sub;
    cin>>n;
    while (n--){
        cin>>num;
        vector<int> b(32);
        map<string,int> nums;
        //intToBin(num,MAXS-1,b);
        i = MAXS-1;
        while(num) {
            b[i] = num%2;
            i--;
            num /=2;
        }
        //fori(i,MAXS) cout << b[i];
        //cout << "\n";
        fori(i,MAXS) {
            sub = "";
            sub += to_string(b[i]);
            sub += to_string(b[(i+1)%MAXS]);
            sub += to_string(b[(i+2)%MAXS]);
            sub += to_string(b[(i+3)%MAXS]);
            sub += to_string(b[(i+4)%MAXS]);
            //cout << sub <<endl;
            nums[sub];
        }
        if (nums.size() == MAXS) cout <<"yes\n";
        else cout << "no\n";
        //memset(b,0,sizeof b);
        //nums.clear();
    }

	return 0;
}
