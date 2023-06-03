// #include <stdio.h>
// #include <stdlib.h>
// #include <malloc.h>

// int main()
// {
//     printf("Enter the number of rows in the matrix\n");
//     int n;
//     scanf("%d", &n);
//     int m;
//     printf("Enter the number of columns in the matrix\n");
//     scanf("%d", &m);
//     printf("Enter the elements in the matrix\n");

//     int **arr = (int **)malloc(n * sizeof(int *));
//     for (int i = 0; i < n; i++)
//     {
//         *(arr + i) = (int *)malloc(m * sizeof(int));
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             int val;
//             scanf("%d", &val);
//             *(*(arr + i) + j) = val;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int maxi = -99999;
//         for (int j = 0; j < m; j++)
//         {
//             if (*(*(arr + i) + j) > maxi)
//             {
//                 maxi = *(*(arr + i) + j);
//             }
//         }
//         printf("%d\n", maxi);
//     }

//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>


int main(){
      printf("Enter the number of rows in the matrix\n");
      int n;
      scanf("%d",&n);
      printf("Enter the number of columns in the matrix\n");
      int m;
      scanf("%d",&m);
      int **arr=(int **)malloc(m*sizeof(int *));
        printf("Enter the elements in the matrix\n");
        
        for(int i=0;i<n;i++){
            *(arr+i)=(int *)malloc(m*sizeof(int));
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int val;
                scanf("%d",&val);
                *(*(arr+i)+j)=val;
        }
          } 
          
        for(int i=0;i<n;i++){
            int maxi=-9999;
            for(int j=0;j<m;j++){
        if(*(*(arr+i)+j)>maxi){
            maxi=*(*(arr+i)+j);
        }        
            }
            printf("\n");
        }  
      
    return 0;
}


