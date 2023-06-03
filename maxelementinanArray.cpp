#include<iostream>
using namespace std;
int main()
{
    int A[10]={-1,-2,-5,6,-8};
    int max=INT_MIN;      // for min=INT_MAX;
    for(auto x:A)        //use of x is that it automaticslly understand whatever the x is either integer or float or something
    {
        if(x>max)
        max=x;
    }
    cout<<max;
}