#include<iostream>
using namespace std;
#include<stdio.h>

int area(int length, int breadth)
     
{
    return length*breadth;
    


}
   int perimeter(int length,int breadth)
    {
    return    2*(length+breadth);
     
   }
     
int main()
{
      int length=0,breadth=0;
      cin>>length>>breadth;

                   int a=area(length,breadth);
      int peri=perimeter(length,breadth);

      printf("%d\n%d",a,peri);

      return 0;


}