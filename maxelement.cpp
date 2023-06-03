#include <iostream>
using namespace std;
int main()
{
    int i, n;
    int A[10] = {2, 3, 4, 5, 6, 7, 44, 32, 66, 23};
  int  max = A[2];
    for (i = 0; i <= 9; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            // cout << max<<endl;
        }
        // cout << max<<endl;
    }
    // cout << max<<endl;
    return 0;
}