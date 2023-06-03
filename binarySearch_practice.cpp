#include <stdio.h>
#include <stdlib.h>

void binarysearch(int arr[], int low, int high, int key)
{
    if (low > high)
    {
        printf("Not Found\n");
        return;
    }

    int mid = (high + low) / 2;
    if (arr[mid] == key)
    {
        printf("Found\n");
        return;
    }

    if (arr[mid] > key)
    {
        return binarysearch(arr, low, mid - 1, key);
    }

    else
    {
        return binarysearch(arr, mid + 1, high, key);
    }
}

int main()
{
    int arr[] = {4, 5, 6, 7, 8};
    binarysearch(arr, 0, 4, 10);
    return 0;
}