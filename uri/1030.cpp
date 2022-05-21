//adhoc
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t,i,n,m,p;
    vector<int> s;
    cin >> t;
    i=1;
    while(i<=t){
        cin >> n >> m;
        cout << "Case " << i << ": ";
        if(m == 1){
            cout << n << "\n";
        }else{
            for(p = 0 ; p < n ; p++){
                s.push_back(p + 1);
            }
            --m;
            p = 0;
            while(n > 1){
                p += m;
                if(p == n - 1){
                    s.erase(s.begin() + p);
                    p = 0;
                }else{
                    if(p > n - 1){
                        while(p > n - 1){
                            p= p - n;
                        }
                        s.erase(s.begin() + p);
                    }else{
                        s.erase(s.begin() + p);
                    }
                }
                --n;
            }
            cout<<s[0]<<"\n";
            s.clear();
        }
        i++;
    }
    return 0;
}
