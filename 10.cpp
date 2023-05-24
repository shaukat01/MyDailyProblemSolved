#include <iostream>
using namespace std;
template <class t>

void sort(t arr[], t n)
{
    t temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                // temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;
                swap(arr[i], arr[j]);
            }
        }
    }
}

template <class t>
void search(t arr[], t n, t key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element is found :" << endl;
            break;
        }
    }

    if (i == n)
    {
        cout << "Element is not found :" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array :" << endl;
    cin >> n;
    int arr1[n];
    double arr2[n];
    cout << "Enter the array elements in an integer :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    sort<int>(arr1, n);
    cout << "The sorted elements in an array in integer is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " " << endl;
    }
    cout << "Enter the array elements in an double :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    sort<double>(arr2, n);
    cout << "The sorted elements of an array in double is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " " << endl;
    }
    int k1;
    double k2;
    cout << "Enter the elements to be searched in integer :" << endl;
    cin >> k1;
    cout << "Enter the elements to be searched in double :" << endl;
    cin >> k2;
    search<int>(arr1, n, k1);
    search<double>(arr2, n, k2); // doubt
    return 0;
}
