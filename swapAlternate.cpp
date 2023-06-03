#include <bits/stdc++.h>
using namespace std;

void sAlternate(int *arr, int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{       
    int arr[6] = {2, 1, 5, 4,8};
    sAlternate(arr, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}