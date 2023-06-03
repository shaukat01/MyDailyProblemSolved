#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else{
        if(n==1){
            return 1;
        }
        else{
            return fibonacci(n-1)+fibonacci(n-2);
        }
    }
}

int main()
{
    int n;
    printf("Enter the value of\n");
    scanf("%d", &n);
    printf("The term %d in the fibonacci series is %d",n,fibonacci(n-1));
     return 0;
}