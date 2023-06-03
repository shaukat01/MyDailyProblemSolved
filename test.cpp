#include<iostream>
using namespace std;
int main(){

void printTable(int start, int end, int step) {
   
  
    int fare = start;
    
    while( fare <= end){
        
        int celValue =  (5.0/9)*(fare - 32);
        
        cout<<fare<<" "<<celValue<<endl;
        
        fare += step;
        
    } 
    
}
}

