#include <bits/stdc++.h>
using namespace std;
int sch_mpointer(int i, vector<int> v) {
    int aux ;
    int m;
    if(i == v.size())
        return i;
    else
        for(i; i < v.size(); i++) {
            if(v[i] == aux) {
                continue;
            } else if(v[i] < aux) {
                m = i;
                aux = v[i];
            }
        }
    return m;
}

int sch_Mpointer(int i, int j, vector<int> v) {
    int aux = 0;
    int M;
    if(i == j)
        return i;
    else
        for(i += 1; i < j; i++) {
            if(v[i] == aux) {
                continue;
            } else if(v[i] > aux) {
                M = i;
                aux = v[i];
            }
        }
    return M;
}

int main() {
    int n, i, j, ans, aux;
    vector<int> min_pointers;
    vector<int> days;
    cin >> n;
    while(n--) {
        cin >> aux;
        days.push_back(aux);
    }
    i = 0;
    while(i < days.size()) {
        i = sch_mpointer(i, days);
        if(i != days.size() - 1) {
            min_pointers.push_back(i);
        }
        i++;
    }
    i = 0;
    ans = 100;
    while(i != min_pointers.size() - 1) {
        aux = sch_Mpointer(min_pointers[i], min_pointers[i + 1], days);
        j = ans / days[min_pointers[i]];
        ans = j * days[aux] + ans % days[min_pointers[i]];
        i++;
    }
    if(i < days.size()) {
            aux = sch_Mpointer(min_pointers[i], days.size(), days);
            j = ans / days[min_pointers[i]];
            ans = j * days[aux] + ans % days[min_pointers[i]];
        }
    cout << ans << endl;
    return 0;
}
/*
6
100 200 100 150 125 300
*/
