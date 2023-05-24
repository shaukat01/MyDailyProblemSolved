#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements of vector: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = *min_element(arr, arr + n);
    cout << "Minimum element is: " << min << endl;
    int max = *max_element(arr, arr + n);
    cout << "maximum element is: " << max << endl;
    int sum = accumulate(arr, arr + n, 0);
    cout << "The summation of all given input is: " << sum << endl;
    int ct = count(arr, arr + n, 3);
    cout << "The counting is: " << ct << endl;
    int ele = *find(arr, arr + n, 10);
    cout << "The finding element is: " << ele << endl;
    reverse(arr, arr + n);
    cout << "The reversing element is: " << endl;
    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;
    // reverse in string
    string s = "abfjdfdi";
    cout << "The everse string is: " << endl;
    reverse(arr, arr + n);
    cout << s << endl;
    return 0;
}
