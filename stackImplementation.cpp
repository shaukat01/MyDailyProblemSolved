#include<iostram>
using namespace std;

class stack{

    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }


  void push(int element){
   if(size-top >1){
   top++;
   arr[top]=element;
   }
   else{
    cout<<"stack is overflow: "<<endl;
   }
 }


 void pop(){
      if(top>=0){
        top--; 
      }
      else{
        cout<<"stack is underflow: "<<endl;
      }
 }


 int peek(){
     if(top>=0){
        return arr[top];
     }
     else{
        return false;
     }
 }


 void isEmpty(){
   if(top==-1){
    return true;
   }
   else{
    return false;
   }
 }

};

int main(){

 stack st;
 st.push(15);
 st.push(20);
 st.push(29);

  cout<<st.peek()<<endl;
    return 0;
}