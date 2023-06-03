#include<iostream>
using namespace std;


int main() {
     int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char ch='E'+i-1;
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
            {
                cout<<ch;
                ch--;
            }
        }
        cout<<endl;
    }
 
    
}
