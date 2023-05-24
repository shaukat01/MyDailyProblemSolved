#include<bits/stdc++.h>
using namespace std;

class phone{
    private:
  string areaCode;
  string exchange;
  string number;
 
   public:
   void set1(string a1,string b1,string c1)
   {
      areaCode=a1;
      exchange=b1;
      number=c1;
   }
   void set2(string a2,string b2,string c2)
   {
     areaCode=a2;
     exchange=b2;
     number=c2; 
   }
   void display(){
       cout<<"("<<areaCode<<")"<<exchange<<"-"<<number<<endl;
   }

};

int main(){
       phone p1;
       p1.set1("044","234","8900");
      //  phone p2;
       string a2,b2,c2;
       cin>>a2>>b2>>c2;
       p1.set2(a2,b2,c2);
       p1.display();
       p1.display();
      //  p2.display();
    return 0;
}