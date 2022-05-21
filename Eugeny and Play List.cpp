 #include <bits/stdc++.h>
 using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k; cin>>n;
    int m; cin>>m;
    long long c,t;
    vector<pair<int,int>> songs;
    vector<long long> notes;
    while(n--) {
        cin>>c>>t;
        songs.push_back(make_pair(c,t));
    }
    while(m--) {
        cin >> c;
        notes.push_back(c);
    }
    int j = 1;
    long long tm = songs[0].first*songs[0].second;;
    //cout <<"tm"<< tm <<endl;
    for(int i = 0; i < notes.size();i++){
    //cout << notes[i] << " " << tm<<endl;
        while(notes[i] > tm && j < songs.size()){
            tm += songs[j].first*songs[j].second;
            j++;
        }
        cout << j << "\n";
    }
}
