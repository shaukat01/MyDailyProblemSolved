#include<iostream>
using namespace std;
int main()
{
    /*
    char s[30];
    char s2[37];
     cin.get(s,30);
      cout<<s<<endl;

     cin.ignore();
      
      cin.get(s,37);
     cout<<s2<<endl;
       */


   char s[30];
    char s2[37];
     cin.getline(s,30);
      cout<<s<<endl;

     
      
      cin.getline(s,37);
     cout<<s2<<endl;
    return 0;
}
