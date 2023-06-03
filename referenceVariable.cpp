#include<iostream>
using namespace std;

void update(int num){
    num++;
}

void update1(int& num){
   num++;
}

//bad practice  it gives warning
int& fun(int a){   //returnby refference
   int num=a;
   int& ans=num;
   return ans;
}

//bad practice  it gives warning
int* fun2(int a){
  int *ptr=&a;
  return ptr;
}


int main(){

   int i=5;
   int& j=i;
   cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    cout<<i<<endl;
    cout<<endl<<endl;
    int n=5;
    cout<<n;
    cout<<endl;
    update(n);
    cout<<n;
    cout<<endl;
    update1(n);
    cout<<n;
    cout<<endl<<endl;
    fun(n);
    cout<<endl;
    fun2(n);
    return 0;
}