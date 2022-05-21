#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, i, j;
    char aux;
    string s, s2;
    string ans;
    cin >> t;
    while(t--) {
        cin >> s;
        for(i = 0; i < s.length(); i++) {

            if(s[i] + 1 == s[i + 1]) {
                cout << "Encontrado" << endl;
                //points.push_back(i);
                aux = s[i];
                s.erase(s.begin() + i);
                s2 = s;
                if(aux + 1 != s[0] && aux - 1 != s[0] ) {
                    s.insert(s.begin(), aux);
                } else if(aux + 1 != s[s.length() - 1] && aux - 1 != s[s.length - 1] ) {
                    s.insert(s.end() - 1, aux);
                } else
                    for(j = 0; j < s.length(); j++) {
                        cout << s << endl;
                        if(aux + 1 != s[j] && aux - 1 != s[j] && aux + 1 != s[j + 1] && aux - 1 != s[j + 1]  ) {
                            cout << "insert" << endl;
                            s.insert(s.begin() + j + 1, aux);
                            cout << s << endl;
                            i = 0;
                            break;
                        }
                    }
                if(s2 == s)
                    cout << "No answer\n";
            }


        }
    }
    return 0;
}
