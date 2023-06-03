#include<iostream>
using namespace std;
int main()
{
    string str ="welcome";
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
     cout<<"length is"<< count;
     return 0;
}