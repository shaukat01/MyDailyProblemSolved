#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
      int length, breadth;

      printf("Enter the length and bredth\n");
       scanf("%d %d",&length,&breadth);
    //   cin>>length>>breadth;

      int area = length*breadth;
      int perimeter = 2*(length+breadth);

    //   printf("%d\n %d\n",area,perimeter);
      cout<<area<<endl<<perimeter<<endl;

    return 0;
}