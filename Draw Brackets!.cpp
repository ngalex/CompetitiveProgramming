#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string b; cin>>b;
    vector<int>lvl;
    int aux = 0;
    int maxlvl = 0;
    bool cls = false;
    for(char &x: b) {
        if (x == '[') { aux++; maxlvl = max(maxlvl, aux); lvl.push_back(aux); cls =true;}
        else { if (cls) {lvl.push_back(0);cls = false;} lvl.push_back(aux); aux--;}
    }
    cout << maxlvl <<"\n";
    //for(auto &x: lvl) cout << x << " "; cout << "\n";
    for(auto &x: lvl) {if(x !=0 )x = maxlvl -x+1; cout << x << " ";} cout << "\n";
    int m = maxlvl*2+1;
    int i = 0;
    int j = m-1;
    string shw[m];
    string str;
    for(int k = 0; k < lvl.size(); k++){
        int a = i + maxlvl - lvl[k];
        int b = j - (maxlvl - lvl[k]);
        cls = false;
        for(int l = 0; l < m; l++){
            //if (shw[l][shw[l].length()-1] == "+" ||) shw[l]+="-";
            if (lvl[k] == 0) shw[l] += " ";
            else if (l < a || l > b) shw[l] += " ";
            else if (l == a ||l == b) {
                    if(!cls) {
                        shw[l]+= "+-";
                        cls = true;
                    } else {
                        shw[l][shw[l].length()] = '0';
                        shw[l]+="-+";
                        cls= false;
                    }
                }
            else if (lvl[k+1] == 0) shw[l] += "| "; else if (lvl[k-1] == 0) shw[l] +=" |"; else shw[l] += "|";
        }
    }
    /*while (i < j && maxlvl) {
        cls = false;
        str = "";
        for(int k = 0; k < lvl.size(); k ++) {
        //cout <<lvl[k]<<endl;
            if (lvl[k] == maxlvl) {
            //if (lvl[k] == 0) str+=" ";
                if (!cls) { str += "+-" + string (lvl[k+1], ' '); cls = true;}
                else {str +=  string (lvl[k-1], ' ') + "-+";cls = false;}
            } else if (lvl[k] > maxlvl) {
                    if (lvl[k+1] == 0) str += "| ";
                    else if(lvl[k-1] == 0) str +=" |";
                    else str+="|";
            } else if (lvl[k] == 0) str += " "; //str += string (maxlvl, ' ');
        }
        maxlvl--;
        shw[i] = str;
        shw[j] = str;
        i++;
        j--;
    }
    str = "";
    for(int k = 0; k < lvl.size(); k++) {
        if (lvl[k+1] == 0 ) { str += "|   |"; k +=2;}
        else if (lvl[k] != 0) str += "|";
    }
    shw[i] = str;*/
    for(auto &x: shw) cout << x <<"\n";



}
/*
for(auto &x: lvl) cout << maxlvl - x +1<<" ";
    cout << "\n" << maxlvl << "\n";


*/
