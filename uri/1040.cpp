//PROMEDIO PONDERADO
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    float n1, n2, n3, n4, exm, aux;
    cin >> n1 >> n2 >> n3 >> n4;
    aux = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    cout << fixed << setprecision(1) << "Media: " << aux << "\n";
    if(aux >= 7.0)
        cout << "Aluno aprovado.\n";
    else {
        if(aux < 5.0 )
            cout << "Aluno reprovado.\n";
        else {
            cout << "Aluno em exame.\n";
            cin >> exm;
            cout << fixed << setprecision(1) << "Nota do exame: " << exm << "\n";
            ((aux + exm) / 2 >= 5.0) ? cout << "Aluno aprovado." : cout << "Aluno reprovado.";
            cout << fixed << setprecision(1) << "\nMedia final: " << (aux + exm) / 2 << "\n";
        }
    }
    return 0;
}
