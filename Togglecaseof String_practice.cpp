#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{

    char A[]="welcome";
    int i;
    for(i=0; A[i]!='\0'; i++ )
    {
        if(A[i]>=65 && A[i]<=122)
        {
            A[i]+=32;
        }
        else{
            A[i]>='a' && A[i]<=122
        }

    }
    printf("%d", A);



 
 return 0;   
    
}