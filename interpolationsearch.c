#include <stdio.h>
#include <stdlib.h>

int interpolation_search(int arr[], int l, int h, int key)
{
    if (l > h)
        return -1;

    int pos = l + ((key - arr[l]) / (arr[h] - arr[l])) * (h - l);
    if (arr[pos] == key)
        return pos;
    else
    {
        if (arr[pos] > key)
        {
            return interpolation_search(arr, l, pos - 1, key);
        }

        else
        {
            return interpolation_search(arr, pos + 1, h, key);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);
    int ans = interpolation_search(arr, 0, n - 1, key);
    printf("%d", ans);
    
}