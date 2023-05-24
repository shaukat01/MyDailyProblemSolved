#include<iostream>
using namespace std;

int main(){
    //declaration
    pair<int,string>p;
  //initialision
  //method 1
   p=make_pair(2,"abc");
   //method 2
   p={2,"abc"};
   //print
   cout<<p.first<<" "<<p.second<<endl;

   //making array in pair
    pair<int,int>p_array[3];
     //initialisation 
     p_array[0]={2,9};
     p_array[1]={17,10};
     p_array[2]={4,15};
     //printing 
     for(int i=0;i<3;i++){
         cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
     }
      //swapping 
      cout<<"after swapping elements are: "<<endl;
      swap(p_array[0],p_array[2]);
      for(int i=0;i<3;i++){
         cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
     }
    return 0;
}