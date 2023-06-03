#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int search)
{
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  // cout << "x" << endl;
  while (start <= end)
  {
    // cout << "y" << endl;
    if (arr[mid] == search)
    {
      return arr[mid];
    }
     if (search > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int main()
{
  //somewhere error
  int n;
  cout << "Enter the size of array: " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter the array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[n];
  }
  // int search;
  // cout << "Enetr the searching element: " << endl;
  // cin >> search;
  int y=binarySearch(arr, n, 4);
  cout<< y<<endl;
  return 0;
}