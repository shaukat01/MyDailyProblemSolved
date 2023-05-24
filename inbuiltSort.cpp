#include <bits/stdc++.h>
using namespace std;

int main()
{
    // sorting in case of array
    //  int n;
    //  cout << "Enter the value of n: " << endl;
    //  cin >> n;
    //  int arr[n];
    //  cout << "Enter the number of elements in an arrray: " << endl;
    //  for (int i = 0; i < n; i++)
    //  {
    //      cin >> arr[i];
    //  }
    //  sort(arr, arr + n); // intro sort
    //  cout << "The sorted array are: " << endl;
    //  for (int i = 0; i < n; i++)
    //  {
    //      cout << arr[i] << " ";
    //  }

    // sorting in case of vector
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    vector<int> v(n);//size of n
    cout << "Enter the number of elements in an vector: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end()); // intro sort
    cout << "The sorted array are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
