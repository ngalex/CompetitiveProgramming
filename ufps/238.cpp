#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T,M,cases,i,j,m;
    vector<pair<int,int>> R;
    vector<pair<int,pair<int,int>>> images;
    pair<int,int> res;
    cin>>T;
    cases=1;
    while(T){
        cin>>M;
        while(M){
            cin>>res.first>>res.second;
            R.push_back(res);
            M--;
        }
        cin>>M;
        while(M){
            cin>>res.first>>res.second;
            images.push_back({0,res});
            M--;
        }
        cout<<"Case "<<cases<<":"<<"\n";
        int i=0;
        while(i<images.size()){
            j=0;
            m=100;
            while(j<R.size()){
                if(m>(abs(R[j].first-images[i].second.first)+abs(R[j].second-images[i].second.second))){
                    m=(abs(R[j].first-images[i].second.first)+abs(R[j].second-images[i].second.second));
                    images[i].first=j;
                }
                j++;
            }
            cout<<R[images[i].first].first<<" "<<R[images[i].first].second<<" ";

            if(images[i].second.first>images[i].second.second && R[images[i].first].first>R[images[i].first].second
               || images[i].second.first<images[i].second.second && R[images[i].first].first<R[images[i].first].second){
                (images[i].second.first==R[images[i].first].first && images[i].second.second==R[images[i].first].second)?cout<<"0"<<"\n":cout<<"1"<<"\n";
            }else{
                (images[i].second.second==R[images[i].first].first && images[i].second.first==R[images[i].first].second)?cout<<"1"<<"\n":cout<<"2"<<"\n";
            }
            i++;
        }

        cases++;
        R.clear();
        images.clear();
        T--;
    }
    return 0;
}
/*
abs(R[j].first-R[j].second)==abs(images[i].first-images[i].second)
        sort(R.begin(),R.end(),greater<pair<int,int>>());

        if(m>abs(R[j].first-images[i].second.first)){
                    m=abs(R[j].first-images[i].second.first);
                    images[i].first=j;
                }
1
5
4 3
5 6
2 11
2 7
5 8
10
1 2
3 4
5 8
9 6
4 3
7 2
1 6
6 7
10 11
5 6


            cout<<images[i].second.first<<"*"<<images[i].second.second<<" ";
*/
