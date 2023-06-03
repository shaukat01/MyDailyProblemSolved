#include<iostream>
using namespace std;

   void sayDigit(string arr[],int n){
       if(n==0)
       return;

      int digit=n%10;
        n=n/10;

        cout<<arr[digit]<<" "<<endl;
        sayDigit(arr,n); 
   }

int main(){
    
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    int n;
    cout<<"Enter the number which u want to change: "<<endl;
    cin>>n;
    
    sayDigit(arr,n);
    cout<<endl;

    return 0;
}