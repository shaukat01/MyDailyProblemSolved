#include<iostream>
using namespace std;
int main()
{
    float r;
    cin>>r;
// float area = 3.14f*r*r;
// float area = 22/7*r*r;   // it gives integer value because 22 and 7 both are integer 
    float area = (float)22/7*r*r;
  
   cout<<area;

    return 0;
}
