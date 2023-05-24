// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int sizee = 5;
template <class t>

class stack
{
private:
   t arr[5];
    // t arr[sizee];
    int top;

public:
    stack()
    {
        // arr=new t[sizee];
        top = -1;
    }
    void push()
    {
        if (top == sizee - 1)
        {
            cout << "stack is overflow: " << endl;
            return;
        }
        t ele;
        cout << "Enter the element to be push: " << endl;
        cin >> ele;
        top++;
        arr[top] = ele;
    }
    void pop()
    {
        // int x;
        if (top == -1)
        {
            cout << "Stack is empty: " << endl;
            return;
        }
        // x = arr[top--];
        top--;
        // return x;
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Empty Stack: " << endl;
            return;
        }
        cout << "The stack element are: " << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    stack<int>s;
    while(1){
        cout<<"1 push \n 2 pop \n 3 display"<<endl;
        
        int n;
        cout<<"Enter your choice: "<<endl;
        cin>>n;
        if(n==1){
            s.push();
        }
        else if(n==2){
            s.pop();
        }
        else if(n==3){
            s.display();
        }
        else{
            cout<<"Exit"<<endl;
            break;
        }
    }
    // stack<int> s1;
    // s1.push();
    // s1.push();
    // s1.pop();
    // s1.display();
    // stack<char> s2;
    // s2.push();
    // s2.display();
    return 0;
}
