#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    char usn[20];
    char name[20];
    int age;
};

class ugStudent : public student
{
public:
    int sem;
    float fees;
    float stipend;

    void read()
    {
        cout << "Enter the name: " << endl;
        cin >> name;
        cout << "Enter the usn: " << endl;
        cin >> usn;
        cout << "Enter the age: " << endl;
        cin >> age;
        cout << "Enter the sem: " << endl;
        cin >> sem;
        cout << "Enter the fees: " << endl;
        cin >> fees;
        cout << "Enter the stipend: " << endl;
        cin >> stipend;
    }
    void display()
    {
        cout << "Name is: " << name << endl;
        cout << "USN is: " << endl;
        cout << "Age is: " << age << endl;
        cout << "Sem is: " << endl;
        cout << "fees is: " << endl;
        cout << "Stipend is: " << endl;
    }
};

class pgStudent : public student
{
public:
    int sem;
    float fees;
    float stipend;

    void read()
    {
        cout << "Enter the name: " << endl;
        cin >> name;
        cout << "Enter the usn: " << endl;
        cin >> usn;
        cout << "Enter the age: " << endl;
        cin >> age;
        cout << "Enter the sem: " << endl;
        cin >> sem;
        cout << "Enter the fees: " << endl;
        cin >> fees;
        cout << "Enter the stipend: " << endl;
        cin >> stipend;
    }
    void display()
    {
        cout << "Name is: " << name << endl;
        cout << "USN is: " << endl;
        cout << "Age is: " << age << endl;
        cout << "Sem is: " << sem << endl;
        cout << "fees is: " << fees << endl;
        cout << "stipend is: " << stipend << endl;
    }
};

int main()
{
    ugStudent u[5];
    pgStudent p[5];
    cout << "Enter the details of ug Student: " << endl;
    for (int i = 0; i < 5; i++)
    {
        u[i].read();
    }
    float sum1 = 0;
    float avg1 = 0;
    for (int i = 0; i < 5; i++)
    {
        sum1 = sum1 + u[i].age;
    }
    avg1 = sum1 / 5;
    cout << "The details of ug student are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Student" << i + 1 << endl;
        u[i].display();
    }
    cout << "The average age of ug student are: " << avg1 << endl;
    cout << "Enter the details of pg student: " << endl;
    for (int i = 0; i < 5; i++)
    {
        p[i].read();
    }
    float sum2 = 0;
    float avg2 = 0;
    for (int i = 0; i < 5; i++)
    {
        sum2 = sum2 + p[i].age;
    }
    avg2 = sum2 / 5;
    cout << "The details pf pg student are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        p[i].display();
    }
    cout << "The average age of pg students are: " << avg2 << endl;
    return 0;
}