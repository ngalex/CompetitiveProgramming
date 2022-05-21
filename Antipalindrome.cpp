 #include <bits/stdc++.h>
 using namespace std;
 int palindrome(string str) {
    int a = 0;
    int b = str.length()-1;
    while(a <= b) {
        if (str[a] != str[b]) return 0;
        a++;
        b--;
    }
    return 1;
 }

 int main(){
    string s; cin>>s;
    int n; n = s.length();
    int i = 0;
    while(n){
//cout <<s.substr(i,n) <<endl;
        if (!palindrome(s.substr(i,n))) break;
        n--;
        i++;
    }
    cout << n << endl;
 }
    //cout <<palindrome(s)<<endl;
    /*while(i<j) {
            cout<< s.substr(i,n)<<endl;
    cout << palindrome(s.substr(i,j)) <<endl;
        if(!palindrome(s.substr(i,j))) break;
        i++;//s.erase(s.begin()+1);n--;
        //cout << s <<endl;
        n--;
    }
    cout << n<<"\n";*/
