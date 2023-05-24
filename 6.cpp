#include <iostream>
using namespace std;

class employee
{
public:
    char name[20];
    char gen[20];
    int id;
};

class department : public employee
{
public:
    char deparName[20];
    char workAssigned[20];
    void read()
    {
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter gender: " << endl;
        cin >> gen;
        cout << "Enter id: " << endl;
        cin >> id;
        cout << "Enter departmentName: " << endl;
        cin >> deparName;
        cout << "Enter workAssigned: " << endl;
        cin >> workAssigned;
    }
    void print()
    {
        cout << "Name is: " << name << endl;
        cout << "Gender is: " << gen << endl;
        cout << "Id is: " << id << endl;
        cout << "department name is: " << deparName << endl;
        cout << "Work Assigned is: " << workAssigned << endl;
    }
};

class loan : public employee
{
public:
    char loanDetails[20];
    int loanAmount;
    void read()
    {

        cout << "Enter loandetails: " << endl;
        cin >> loanDetails;
        cout << "Enter loanAmount: " << endl;
        cin >> loanAmount;
    }
    void print()
    {

        cout << "Loan Details is: " << loanDetails << endl;
        cout << "LoanAmount is: " << loanAmount << endl;
    }
};

int main()
{
    // int n;
    // cout << "Enter Number of Employees: " << endl;
    // cin >> n;
    // department d[n];
    // loan l[n];
    // for (int i = 0; i < n; i++)
    // {
    //     d[i].read();
    //     l[i].read();
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     d[i].print();
    //     l[i].print();
    // }

    department d;
    loan l;
    d.read();
    l.read();

    d.print();
    l.print();
    return 0;
}