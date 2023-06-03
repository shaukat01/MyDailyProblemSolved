// #include <stdio.h>
// #include <stdlib.h>
// #include <malloc.h>

// struct student
// {
//     char name[20];
//     int usn;
//     int m1, m2, m3;
//     float avg;
// };
// int main()
// {
//     int n, i, j;
//     printf("Enter total number of students\n");
//     scanf("%d", &n);
//     struct student a[n], temp;
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter details of student %d\n", (i + 1));
//         scanf("%s", a[i].name);
//         scanf("%d", &a[i].usn);
//         scanf("%d", &a[i].m1);
//         scanf("%d", &a[i].m2);
//         scanf("%d", &a[i].m3);
//         a[i].avg = (a[i].m1 + a[i].m2 + a[i].m3) / 3.0;
//     }
//     for (i = 0; i < n; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (a[i].avg < a[j].avg)
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     printf("Displaying Information\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%s %d %d %d %d\n", a[i].name, a[i].usn, a[i].m1, a[i].m2, a[i].m3);

//     }

//     return 0;
// }



#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[20];
    int usn;
    int m1;
    int m2;
    int m3;
    float avg;
};

int main(){
    int n;
    int i,j;
    struct student arr[n],temp;
    printf("Enter total number of students");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     printf("Enter datails of student %d\n",i+1);
       scanf("%s",arr[i].name);
       scanf("%d",&arr[i].usn);
       scanf("%d",&arr[i].m1);
       scanf("%d",&arr[i].m2);
       scanf("%d",&arr[i].m3);
       arr[i].avg=(arr[i].m1 + arr[i].m2 + arr[i].m3)/3.00;
    }
      for(i=0;i<n;i++){
          for(j=i+1;j<n;j++){
              if(arr[i].avg<arr[j].avg){
                  temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
              }
          }
      }
      
      printf("Displaying infomration\n");
      for(int i=0;i<n;i++){
        printf("%s %d %d %d %d",arr[i].name,arr[i].usn,arr[i].m1,arr[i].m2,arr[i].m3);          
      }
    return 0;
}

