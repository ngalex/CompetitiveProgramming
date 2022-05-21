#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.first > b.first);
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(NULL);
    int g,p,q,k,n,i;
    map<int,int> points;
    vector<pair<int,int>> pos;
    vector<int> pilots;
    while(cin >> g >> p && (p + g))
    {
        while(g--)
        {
            i=p;
            while(i--){
            cin >> n;
            points[n] = 0;
            pilots.push_back(n);}
        }
        cin >> q;
        while(q--)
        {
            cin >> k;
            for(i = 0;i < k; i++){
                cin>>n;
                points[pilots[i]] = n;
                pos.push_back({points[pilots[i]],pilots[i]});
            }
            sort(pos.begin(),pos.end(),sortbysec);
            i=0;
            n = pos[0].first;
            while(pos[i].first == n){
                cout<< pos[i].second << " ";
                i++;
            }
            pos.clear();
            cout << "\n";
        }
        pilots.clear();
        points.clear();
    }

    return 0;
}
