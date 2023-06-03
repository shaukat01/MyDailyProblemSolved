#include<iostream>
using namespace std;


void reach(int source,int destination){
    cout<<"source"<<source<<endl;
  if(source==destination){
    cout<<"Pouch gya: "<<endl;
    return ;
  }
  source++;

  reach(source,destination);
}

int main(){

    int source=1;
    int destination=10;
    cout<<endl;
    
    reach(source,destination);
    return 0;
}