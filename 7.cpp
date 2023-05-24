#include <iostream>
using namespace std;

class student
{
public:
    char name[20];
    char usn[20];
    void setStudent()
    {
        cout << "Enter the name: " << endl;
        cin >> name;
        cout << "Enter the usn: " << endl;
        cin >> usn;
    }
    void getStudent()
    {
        cout << "Name is: " << name << endl;
        cout << "Usn is: " << usn << endl;
    }
};
class test : public student
{
public:
    int marks1;
    int marks2;

    void setTest()
    {
        cout << "Enter marks1" << endl;
        cin >> marks1;
        cout << "Enter marks2" << endl;
        cin >> marks2;
    }
    void getTest()
    {
        cout << "Marks 1 is:" << marks1 << endl;
        cout << "Marks 2 is: " << marks2 << endl;
    }
};
class sports : public student
{
public:
    int sScore;
    void setScore()
    {
        cout << "Enter Score: " << endl;
        cin >> sScore;
    }
    void getScore()
    {
        cout << "sportscore is: " << sScore << endl;
    }
};
class result : public test, public sports
{
public:
    int tScore;
    void setResult()
    {
        tScore = marks1 + marks2 + sScore;
    }
    void getResult()
    {
        cout << "total score is: " << tScore << endl;
    }
};
int main()
{
    result r1;

     r1.test::setStudent();
    r1.test::getStudent();

    r1.setTest();
    r1.getTest();

     r1.setScore();
     r1.getScore();

    r1.setResult();
    r1.getResult();

    return 0;
}