#include<stdio.h>
#include<stdlib.h>
typedef struct timee
{
    int h;
    int m;
    int s;
    struct timee *next;
}timee;
 void display(timee p[])
 {
     for(int i=0;i<2;i++)
     {
         printf("%d :%d :%d\n",p[i].h,p[i].m,p[i].s);
     }
 }
 int main()
 {printf("Enter the number\n");
     timee t[10];
    // t=(timee *)malloc(2*sizeof(timee));
     for(int i=0;i<2;i++)
     {printf("Time %d",i+1);
         scanf("%d%d%d",&t[i].h,&t[i].m,&t[i].s);
     }
     display(t);
     return 0;
 }