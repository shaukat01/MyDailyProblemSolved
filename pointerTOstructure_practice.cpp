#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int main()

{
    /*
             struct Rectangle r ={10,5};     // in c we need to write struct
    //    Rectangle r = {10,5};   // in c++ we can write only rectangle without getting any error
                
               cout<<r.length<<endl;
    cout<<r.breadth<<endl;       

        */

      /*
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r;
    cout << p->length << endl; // when pointer with structure use arrow and when normal veriable use dot operatorF
    cout << p->breadth << endl;
              */


             // print in heap
             struct Rectangle *p;
             p=(struct Rectangle *)malloc(sizeof(struct Rectangle));    // in c language  to print in heap
                 //or
              p= new Rectangle;   // in c++ to print in heap
             p->length=15;
             p->breadth=10;
             cout<<p->length<<endl;
             cout<<p->breadth<<endl;


    return 0;   
}