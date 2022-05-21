//ad hoc
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    set<int> alice,betty,rep;
    set<int>::iterator it;
    int a,b,n;
    while(cin>>a>>b && (a + b != 0)){
        while(a--){
            cin>>n;
            alice.insert(n);
        }
        while(b--){
            cin>>n;
            it = alice.find(n);
            if(it !=  alice.end()){
                rep.insert(*it);
                alice.erase(it);
            }
            else{
                it=rep.find(n);
                if(it==rep.end()) betty.insert(n);
            }
        }
        cout<<(alice.size()+betty.size()-abs((int)alice.size()-(int)betty.size()))/2<<"\n";
        alice.clear();
        betty.clear();
        rep.clear();
    }
    return 0;
}
