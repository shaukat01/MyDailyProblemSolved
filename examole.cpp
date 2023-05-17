#include<iostream>
using namespace std;


int main(){

int a[] = {1, 2, 3, 4};
int *p;
 *p = &(a++);
cout << *p << endl;
}