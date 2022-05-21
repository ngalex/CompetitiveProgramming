#include <bits/stdc++.h>
using namespace std;

class EllysPronunciation {
public:
        int getGood(vector<string> words) {
            int v, c, res = 0;
            for(int i = 0; i < words.size(); i++) {
                int aux = words[i].length();
                v= 0; c = 0;
                for(int j = 0; j < aux; j++) {
                    if (words[i][j] == 'a') v++;
                    else if (words[i][j] == 'e') v++;
                    else if (words[i][j] == 'i') v++;
                    else if (words[i][j] == 'o') v++;
                    else if (words[i][j] == 'u') v++;
                    else c++;
                }
                if (v == c) res++;
            }
            return res;
        }
        EllysPronunciation(){}

};

int main() {
    EllysPronunciation ep;
    int res = ep.getGood({"wrath", "allure", "vorliebe", "abneigung", "amor", "voulez", "ecoeurement", "odiar"});
    cout << res <<endl;

}
