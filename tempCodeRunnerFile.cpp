#include <iostream>
using namespace std;
// brute force
int count = 0;


void selection_sort(int arr[], int n)
{
  for (int i = 0; i <= n - 2; i++)
  {
    int pos = i;
    for (int j = i + 1; j <= n - 1; j++)
    {
      count++;
      if (arr[j] < arr[pos])
      {
        pos = j;
      }
    }
    swap(arr[pos], arr[i]);
  }
}


int main()
{
  int n;
  cout << "Enter the size of elements :" << endl;
  cin >> n;
  int arr[n];
  cout << "Enter the elements :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  selection_sort(arr, n);
  cout << "The sorted elements are:" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\nCount is :" << count << endl;
  return 0;
}