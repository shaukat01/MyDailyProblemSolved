#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
// #include<string.h>
 
 struct stack{
     int top;
     int size;
     int *arr;
 };

 void create(struct stack *st){
     st->size=20;
     st->top=-1;
     st->arr=(int *)malloc(st->size*sizeof(int));
 }

  void push(struct stack *st,int key){
      if(st->top==st->size-1){
          printf("stack overflow");
          return ;
      }
      st->top++;
      st->arr[st->top]=key; 
  }
  
  bool isPalindrome(struct stack *st,char *f,int n){
        int i=0;
        while(i<st->top){
            if(st->arr[st->top]!=st->arr[i]){
                return 0;
            }
        i++;
        st->top--;
        }
        return 1;
  }
   

int main(){
    struct stack st;
    create(&st);
    char str[100];
  int choice;
//   int key;
  bool check=false;
   int x=0;

     while(x!=2){
         printf("1-Enter string\n");
         printf("2-Exit");
         printf("Enter your choice\n");
         scanf("%d",&choice);
         switch(choice){
             case 1:
         printf("Enter the string\n");
         scanf("%s",str);
         for(int i=0;i<strlen(str);i++){
             push(&st,str[i]);
         }
        check=isPalindrome(&st,str,strlen(str));
        if(check){
            printf("%s is palindrome\n",str);
        }
        else{
            printf("%s is not a palindrome\n",str);
        }
         break;
         case 2:
          x=2;
          break;
         }
     }
     return 0;
}
