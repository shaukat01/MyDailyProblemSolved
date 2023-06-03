#include<iostream>
using namespace std;
int main()
{
    float basic,allo,dedu,netsalary;
    cin>>basic>>allo>>dedu;
   netsalary=basic+basic*allo/100-basic*dedu/100;
    cout<<netsalary<<endl;

    return 0;
}