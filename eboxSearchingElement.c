 
#include <stdio.h>
#include <stdlib.h>

int search(int *pkey, int *arr, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (*pkey == arr[i])
        return i;
    }
    return -1;
}
int main()
{
    int n;
   printf("Enter the size\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    printf("Enter the elements\n");
    for (int i = 1; i <= n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements are\n");
    for (int i = 1; i <= n; i++) 
    {
        printf("%d\n", arr[i]);
    }
    int key;
    int *pkey = &key;
    printf("Enter the key element\n");
    scanf("%d", pkey);
    int res = search(pkey, arr, n);
    if (res > -1)
    printf("Element is found at %d", res);
    else 
    printf("Element not found");
    
    return 0;
}