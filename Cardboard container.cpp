#include <bits/stdc++.h>
using namespace std;
void divisors(unsigned long long n, vector<unsigned long long> &divs)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i) {
                divs.push_back(i);
            }

            else {
                divs.push_back(i);
                divs.push_back(n / i);
            }
        }
    }
}
int main() {
    unsigned long long a, b, c, V, ans, aux2;
    vector<unsigned long long>divs;
    float aux;
    cin >> V;
    divisors(V, divs);
    ans = 0;
    for (a = 0; a < divs.size(); a++) {
        for(b = 0; b < divs.size(); b++) {
            for(c = 0; c < divs.size(); c++) {
                if(a <= sqrt(V) && b <= sqrt(V) && divs[a]*divs[b]*divs[c]==V) {
                    aux2 = 2 * (divs[a] * divs[b] + divs[b] * divs[c] + divs[c] * divs[a]);
                    if(ans) {
                        if(aux2 < ans)
                            ans = aux2;
                    } else
                        ans = aux2;

                }
            }

        }
    }
    cout <<  ans << "\n";
    return 0;
}
