#include <iostream>
using namespace std;
int c = 0;
void merge(int arr[], int low, int mid, int high)
{
    int k = low;
    int n1 = mid - low + 1;
    int n2 = high - (mid + 1) + 1;
    int a[n1];
    int b[n2];
    for (int t = 0; t < n1; t++)
    {
        a[t] = arr[t + low];
    }
    for (int t = 0; t < n2; t++)
    {
        b[t] = arr[t + mid + 1];
    }
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        c++;
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        c++;
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        c++;
        arr[k] = b[j];
        k++;
        j++;
    }
}
void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        c++;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
// divide and concequer
int main()
{
    int n;
    cout << "Enter the size of elements: " << endl;
    cin >> n;
    cout << "Enter the array elements: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<c<<endl;
    return 0;
}
