#include<iostream>
#include<stdio.h>
using namespace std;


// method 1
struct rectangle
{
    int length;
    int breadth;
    char x;
    
};

int main()

{

    // struct rectangle r1={15,4};
         //or
        //  struct rectangle r1;
        //   r1.length=15;
        //   r1.breadth= 4;

       // we can change value in structures are as follows
          struct rectangle r1={15,4};
           r1.length=8;
          r1.breadth= 45;

   
    // printf("%d\n", sizeof(r1));
    // printf("%d\n", sizeof(10));
    // cout<<sizeof(r1);

    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

    return 0;
}
            



// //method 2
//            struct rectangle
// {
//     int length;
//     int breadth;
// };

//  struct rectangle r1;


// int main()

// {
//     return 0;
// }