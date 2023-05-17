#include <iostream>
using namespace std;
// brute
int count = 0;

void rankSort(int a[], int r[], int n)
{
  for (int i = 1; i <= n - 1; i++)
  {
    for (int j = 0; j <= i - 1; j++)
    // for (int j =i-1; j >=0; j++) //for insertion sort
    {
      count++;
      // a[i] > a[j] ? r[i]++ : r[j]++;
      if (a[i]>a[j])
      {
        r[i]++;
      }
      else
      {
        r[j]++;
      }
    }
  }

  int b[n];
  for (int i = 0; i < n; i++)
  {
    b[r[i]] = a[i];
  }
  for (int i = 0; i < n; i++)
  {
    a[i] = b[i];
  }
}

int main()
{
  cout << "Enter the size of array" << endl;
  int n;
  cin >> n;
  int arr[n];
  cout << "Enter the array element" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // int rank[n]={0};
  int rank[n];
  for (int i = 0; i < n; i++)
  {
    rank[i] = 0;
  }
  rankSort(arr, rank, n);
  cout << "Sorted array :";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\nCount :" << count << endl;
  return 0;
}