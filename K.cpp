#include <bits/stdc++.h>
using namespace std;
string letters, word;
set<string> res;
void add(){
	int k = letters.size();
	int n = word.size();
	string aux;
	for(int i = 0; i < k; i++){
		for(int e = 0; e <= n; e++){
            aux = "";
			for(int o = 0; o < e; o++) aux += word[o];
			aux += letters[i];
			for(int o = e; o < n; o++) aux += word[o];
			if(word != aux) res.insert(aux);
		}
	}
}

void deleteLetters() {
    string aux;
    for(int i = 0; i < word.length(); i++){
        aux = word;
        aux.erase(i,1);
        if(word != aux)res.insert(aux);
    }
}

void changeLetter() {
    string aux;
    for(int i= 0; i<letters.length(); i++)
    {
        for(int j = 0; j < word.length(); j++){
            aux = word;
            if(letters[i] != word[j]) aux.replace(j, 1, string (1, letters[i]));
            if(word != aux) res.insert(aux);
        }
    }

}

int main() {
    cin>> letters>>word;
    add();
    deleteLetters();
    changeLetter();
    for(auto f: res) cout<< f <<endl;
    return 0;
}
