#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

int maximum(int *a,int *b,int *c){
  if(*a>*b && *a>*c){
      return *a;
  }
  else{
      if(*b>*c && *b>*a){
          return *b;
      }
      else{
          return *c;
      }
  }
}
int main(){
   int a,b,c;
   printf("Enter the value of a\n");
   scanf("%d",&a);
   printf("Enter the value of b\n");
   scanf("%d",&b);
   printf("Enter the value of c\n");
   scanf("%d",&c);
   int result= maximum(&a,&b,&c);
    printf("Maximum element is %d",result);
    return 0;
}