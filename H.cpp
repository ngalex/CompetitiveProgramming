#include <bits/stdc++.h>

using namespace std;
char res = 'Y';

void insertionSort(int arr[], int colors[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
            cout << arr[j] << " > " << key <<endl;
        while (j >= 0 && arr[j] > key)
        {
            res = 'N';
            cout << j << endl;
            if(colors[j] == colors[i]){
                arr[j + 1] = arr[j];
                res = 'Y';
            }
            j = j - 1;
        }
        if (res == 'N') break;
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int colors[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n,c;
    cin >>n>>c;
    int arr[n], colors[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i] >> colors[i];
    }
    //int len = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, colors, n);
    printArray(arr, colors, n);
    cout << res <<"\n";
    return 0;
}
