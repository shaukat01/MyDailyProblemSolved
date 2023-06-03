#include <bits/stdc++.h>
using namespace std;


void reverse(int *arr, int n)
{
    int start = 0;
    int last = n - 1;
    while (start <= last)
    {
        swap(arr[start], arr[last]);
        start++;
        last--;
    }
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[1000];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     reverse(arr, n);
//     print(arr, n);
//     return 0;
// }


//by using inbuilt function
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}







