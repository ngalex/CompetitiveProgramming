#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n, i;
    char ans;
    char aux[5] = {'A', 'B', 'C', 'D', 'E'};
    while(cin >> t && t)
    {
        while(t--)
        {
            i = 0;
            ans = '\0';
            while(i < 5)
            {
                cin >> n;
                if(n <= 127)
                {
                    if(ans == '\0')
                        ans = aux[i];
                    else
                        ans = '*';
                }
                i++;
            }
            if(ans == '\0')
                ans = '*';
            cout << ans << "\n";
        }
    }
    return 0;
}
