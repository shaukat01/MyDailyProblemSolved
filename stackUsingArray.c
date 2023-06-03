#include<stdio.h>
#include<stdlib.h>
  struct stack{
      int size;
      int top;
      int *s;
  };


  void create(struct stack *st){
      printf("Enter the size");
      scanf("%d",&st->size);
      st->top=-1;
      st->s=(int *)malloc(st->size*sizeof(int));
  }

     
   void display(struct stack st){
       int i;
    for(i=st.top;i>=0;i--){
       printf("%d",st.s[i]);
    }
   }  
  

   void push(struct stack *st,int x){
       if(st->top==st->size-1){
           printf("stack overflow");
       }
       else {
           st->top++;
           st->s[st->top]=x;
       }
   }


   int pop(struct stack *st){
       int x=-1;
       if(st->top==-1){
           printf("stack underflow");
       }
       else{
           x=st->s[st->top--];
       }
       return x;
   }

   int peek(struct stack st,int index)
   {
       int x=-1;
       if(st.top-index+1<0){     //where i used curly bracket
           printf("invalid index");
       }
       else{
         x=st.s[st.top-index+1];    
       }
       return x;
   }


   int isEmpty(struct stack st){
       if(st.top==-1){
       return 1;
       }
       else{
       return 0;
       }
   }


   int isFull(struct stack st){
       int x;
       if(st.top==st.size-1){
           x=1;
       }
           else{
               x=0;
           }
       return x;
    //    return st.top==st.size-1;
    //    how we know it return true or false
   }


   int stackTop(struct stack st){
       if(!isEmpty(st)){
       return st.s[st.top];
       }
       else {
       return -1;
       }
   }
    
    

int main(){
    struct stack st;     
    create(&st);

//   st.push(10);    // only in constructor in c++
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);

         
     printf("%d\n",pop(&st));


     printf("%d\n",peek(st,2));
     
          
    display(st);
  return 0;
}