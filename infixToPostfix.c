#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
// infix to postfix 
struct stack
{
    int top;
    char *s;
};
bool isoperator(char x)
{
    if(x=='+'||x=='-'||x=='/'||x=='*'||x=='^')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pre(char x1)
{
    if(x1=='^')
    {
        return 3;
    }
    else
    {
        if(x1=='*'||x1=='/')
        {
            return 2;
        }
        else{
            if(x1=='+'||x1=='-')
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
    }
}
char pop(struct stack *st)
{
    // printf("pop me hai\n");
    char f;
    f = st->s[st->top--];
    return f;

}
void push(struct stack *st, char x)
{
    // printf("push me hai\n");
    st->top++;
    st->s[st->top]=x;
    // printf("stack %c\n",st->s[st->top]);

}

bool isoperand(char t)
{
    if(t=='+'||t=='-'||t=='*'||t=='/'||t=='('||t==')'||t=='^')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void infixtopostfix(struct stack *st, char *s)
{
    // printf("in postfix function\n");
    // printf("%d\n",st->top);
    // printf("%s\n",s);
    int i=0,j=0;
    char post[strlen(s)+2];
    while(s[i]!='\0')
    {
        if(isoperand(s[i]))
        {
            // printf("operand hai\n");
            post[j]=s[i];
            // printf("post %c\n",post[j]);
            j++;
        }
        else
        {

            if(s[i]=='(')
            {
            
                // printf("open bracket hai\n");
               push(st,s[i]);
               
            }
            else{
                if(s[i]==')')
                {
                    // printf("close bracket hai\n");
                    while((st->top!=-1)&&(st->s[st->top]!='('))
                    {
                        post[j++]=pop(st);
                    }
                    pop(st);
                }
                else
                {
                    if(isoperator(s[i])){
                    while(pre(s[i])<=pre(st->s[st->top]))
                    {
                        post[j++] = pop(st);
                    }
                    push(st,s[i]);
                    }
                }
            }
        }
                

         i++;
    }
    while(st->top!=-1)
    {
        post[j++]=pop(st);
    }
    post[j]='\0';
    printf("%s\n", post);
}

void creatstack(struct stack *st, int n)
{
    // printf("in creat function\n");
    st->top = -1;
    st->s = (char*)malloc(n*sizeof(char));

}
int main()
{
    struct stack st;
    char str[100];
    scanf("%s", str);
    creatstack(&st,strlen(str));
    infixtopostfix(&st,str);
    return 0;
    

}