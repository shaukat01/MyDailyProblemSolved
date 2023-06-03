// #include <stdio.h>
// #include <stdlib.h>
// #include <malloc.h>
// #include <stdlib.h>
// #include <string.h>

// struct stack
// {
//     int size;
//     int top;
//     char *s;
// };

// void create(struct stack *st, int n)
// {
//     st->top = -1;
//     st->size = n;
//     st->s = (char *)malloc(st->size * sizeof(char));
// }

// void push(struct stack *st, char x)
// {
//     if (st->top == st->size - 1)
//     {
//         return;
//     }
//     else
//     {
//         st->top++;
//         st->s[st->top] = x;
//     }
// }

// char pop(struct stack *st)
// {
//     char x;
//     if (st->top == -1)
//     {
//         return 0;
//     }
//     else
//     {
//         x = st->s[st->top];
//         st->top--;
//     }
//     return x;
// }

// int isOperand(char a)
// {
//     if (a == '+' || a == '-' || a == '*' || a == '/' || a == '%' || a == '^' || a == '(' || a == ')' || a == '$')
//     {
//         return 0;
//     }
//     return 1;
// }

//     int prece(char c)
//     {
//         if (c == '+' || c == '-')
//             return 1;
//         if (c == '*' || c == '/' || c == '%')
//             return 2;
//         if (c == '^' || c == '$')
//             return 3;
//         if (c == '(' || c == ')')
//             return 4;
            
//         return 0;
//     }

//     void infixTOPostfix(struct stack * st, char *b, int n)
//     {
//         char postfix[n];
//         int k = 0, i = 0;  // k postfix ka hai
//         while (i < n)
//         {
//             if (isOperand(b[i]))   //operator nahi hai tuu
//             {
//                 postfix[k++] = b[i];
//             }
//             else
//             {
//                 while (prece(st->s[st->top]) >= prece(b[i]))
//                 {
//                     postfix[k++] = pop(st);
//                 }
//                 push(st, b[i]);
//             }
//             i++;  // infix
//         }
//         while (st->top != -1)
//         {
//             postfix[k++] = pop(st);
//         }
//         postfix[k] = '\0';
//         printf("postfix is %s\n", postfix);
//     }
//     int main()
//     {
//         struct stack st;
//         char str[100];
//         scanf("%s", str);
//         create(&st, strlen(str));
//         infixTOPostfix(&st, str, strlen(str));

//         return 0;
//     }



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    int size;
    int top;
     char *arr;
};

void create(struct stack *st,int n){
    st->size=n;
    st->top=-1;
    st->arr=(char *)malloc(st->size*sizeof(char));
}

void push(struct stack *st,char key){
    if(st->top==st->size-1){
        printf("stack overflow\n");
        return;
    }
    st->top++;
    st->arr[st->top]=key;
}
  
  char pop(struct stack *st){
      int x=-1;
      if(st->top==-1){
   printf("stack underflow");
   return 0;
      }
      x=st->arr[st->top];
      st->top--;
   return x;
  }
 
 int prece(char p){
     if(p=='+' || p=='-')
     return 1;
     if(p=='*' || p=='%' || p=='/')
     return 2;
     if(p=='^' || p=='$')
     return 3;
     if(p=='(' || p==')')
     return 4;
     
      return 0;
 }
 
 
 int isoperand(char c){
     if(c=='+' || c=='-' || c=='*' || c=='/' || c=='%' || c=='^' || c=='$'){
         return 0;
     }
     else{
         return 1;
     }
 }
 
 void ITP(struct stack *st,char *b,int n){
      char postfix[n];
      int i=0;
      int k=0;
      while(i<n){
      if(isoperand(b[i])){
          postfix[k++]=b[i];
            }
            else{
                while(prece(st->arr[st->top])>=prece(b[i])){
                    postfix[k++]=pop(st);
                }
                push(st,b[i]);
            }
            i++;
    } 
    while(st->top!=-1){
        postfix[k++]=pop(st);
    }
    postfix[k]='\0';
    printf("The postfix expression is %s",postfix);
 }
 
 
 
int main(){
    struct stack st;
    printf("Enter an expression in infix form\n");
    char str[20];
    scanf("%s",str);
       create(&st,strlen(str));
    // printf("The postfix expression is %s",);
      ITP(&st,str,strlen(str));    
    return 0;
}




