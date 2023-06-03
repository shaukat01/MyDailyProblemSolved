#include <iostream>
using namespace std;
int main()
{
    // printing 1 to n
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     cout << i << " ";
    //     i++;
    // }

  //printing sum of given numbers
   int s;
    cout << "Enter the value of s: " << endl;
     cin>>s;
     int i=1;
     int sum=0;
     while(i<=s){
      sum=sum+i;
      cout<<sum<<" ";
      i++;
     }
     cout<<endl;
     cout<<sum;
    return 0;
}
