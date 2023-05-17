#include <iostream>
using namespace std;
// decrease and conquer

 int c=0;
 void insertionSort(int arr[], int n) {
 	for(int i = 1; i <=n-1; i++) {
 		int current = arr[i];
 		int j;
 		for(j = i - 1; j >= 0; j--) {
               c++;
 			if(current < arr[j]) {
 				arr[j+1] = arr[j];
 			}
 			else {
 				break;
 			}
 		}
 		arr[j+1] = current;
 	}
}
int main()
{
	int n;
	cout << "Enter the size of element : " << endl;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	insertionSort(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
