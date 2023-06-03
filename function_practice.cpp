    #include<iostream>
  #include<stdio.h>
     using namespace std;
         
           int add(int a, int b)
           {

           int c;
           c = a+b;
           return c;

           }

      int main()
        {
           int x=10,y=5, sum;
          sum= add(x,y);
           cout<<sum<<endl;



           /*
           // adding two number by simple method
         int x,y,z;
         x=10;
         y=5;       
      z = x+y;
         printf("%d",z);
              */


            return 0; 
                        
     }