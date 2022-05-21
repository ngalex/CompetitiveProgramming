#include <bits/stdc++.h>

using namespace std;

toDec(int arr[], int b, int n) {
    int sum = 0;
    int e = n-1;
    for (int i = 0; i < n; i++) {
        sum += arr[i]*pow(b,e);
        e--;
    }
    return sum;
}

int main() {
    int b,l;
    cin >> b >> l;
    int arr [l];
    int imax = 0;
    int vmax = -1;
    for(int i = 0; i < l; i++)  {
            cin >> arr[i];
            if (arr[i] > vmax) {
                vmax = arr[i];
                imax = i;
            }
    }
    int dec = toDec(arr, b, l);
    int resto = dec % (b+1);

    while (resto) {
        --arr[imax];
        if(arr[imax]<0) {
            cout << "-1 -1\n";
            return 0;
        }else
        resto = toDec(arr,b,l)%(b+1);
    }

    cout << arr[imax] << " " << imax+1 << endl;
    //cout << dec << endl;
}
