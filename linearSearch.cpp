#include <iostream>
using namespace std;
//
int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the search key" << endl;
    cin >> x;
    int result = linearSearch(arr, n, x);
    if (result == -1)
    {
        cout << "element is not found" << endl;
    }
    else
    {
        cout << "element is found at index :" << result << endl;
    }
}