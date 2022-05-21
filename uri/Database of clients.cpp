#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    set<string> providers;
    int t,sum,arr,p;
    string email;
    cin>>t;
    while(t--){
        cin>>email;
        arr=email.find('@');
        sum=email.find('+');
        p=email.find('.');
        if(sum>0 && sum<arr){
            email.erase(email.begin()+sum,email.begin()+arr);
            arr=email.find('@');
        }
        while(p>0 && p<arr){
            email.erase(email.begin()+p);
            arr=email.find('@');
            p=email.find('.');
        }
        providers.insert(email);
    }
    cout<<providers.size()<<"\n";
    return 0;
}
/*
alice.@e.mail
alice@e.mail
ali-----......ce.+hdhsja.iuds@e.mail
 */
