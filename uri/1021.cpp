#include <bits/stdc++.h>
using namespace std;
int cant(int &n, int b){
    int aux = n / b;
    n = n%b;
    return aux;
}
int main(){
    int a,b;
    scanf("%d.%d",&a,&b);
    cout << "NOTAS:" << "\n";
    cout << cant(a,100) << " nota(s) de R$ 100.00"<< "\n";
    cout << cant(a,50) << " nota(s) de R$ 50.00"<< "\n";
    cout << cant(a,20) << " nota(s) de R$ 20.00"<< "\n";
    cout << cant(a,10) << " nota(s) de R$ 10.00"<< "\n";
    cout << cant(a,5) << " nota(s) de R$ 5.00"<< "\n";
    cout << cant(a,2) << " nota(s) de R$ 2.00"<< "\n";
    cout << "MOEDAS:" << "\n";
    cout << cant(a,1) << " moeda(s) de R$ 1.00"<< "\n";
    cout << cant(b,50) << " moeda(s) de R$ 0.50"<< "\n";
    cout << cant(b,25) << " moeda(s) de R$ 0.25"<< "\n";
    cout << cant(b,10) << " moeda(s) de R$ 0.10"<< "\n";
    cout << cant(b,5) << " moeda(s) de R$ 0.05"<< "\n";
    cout << cant(b,1) << " moeda(s) de R$ 0.01"<< "\n";
    return 0;
}
