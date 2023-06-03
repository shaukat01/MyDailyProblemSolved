#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    char *s="welcome";   // to print in heap
        // char s[]="welcome";
    int i;
    for(i=0;s[i]!='\0'; i++)
    {
        printf("%d",i);
    }
    return 0;
}