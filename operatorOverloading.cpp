#include<bits/stdc++.h>
using namespace std;

class ope{
  public:
  int val;

  void operator+(ope& obj2){
    int value1=this->val;
    int value2=obj2.val;
  
   cout<<value2-value1<<endl;

  }
};


int main(){
 ope obj1,obj2;
  obj1.val=7;
  obj2.val=2;

  obj1+obj2;// obj1 is calling + function with obj2 as an parametre

    return 0;
}