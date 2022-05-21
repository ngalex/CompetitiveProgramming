#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,num,m,degr; cin>>n;
	vector<int> days;
	m = n;
	while(m--){
        cin >> num;
        days.push_back(num);
	}
	m = 1;
	while(m <= n) {
        cin>> num;
        degr = 0;
        for(int i = 0; i < m; i++) {
            if (days[i] >0)
                if(days[i] > num) {days[i]-=num;degr+=num;}
                else {degr += days[i]; days[i]=0;}
        }
        m++;
        cout << degr << " ";
	}
    cout << "\n";
}
