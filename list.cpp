#include <iostream>
#include <list>
using namespace std;

int main()
{
    // list is basically used for bidirectional operation
    list<int> l1{1, 6, 2, 56, 157}; // way of initialisation
    list<int>::iterator it1 = l1.begin();
    l1.push_back(3);   // inserting from backside
    l1.push_front(15); // inserting from front
    while (it1 != l1.end())
    {
        cout << (*it1) << " ";
        it1++;
    }
    l1.pop_back();
    l1.pop_front();
    l1.sort();
    l1.reverse();
    l1.remove(2);
    cout << "Totl size is: " << l1.size();
    while (it1 != l1.end())
    {
        cout << (*it1) << " ";
        it1++;
    }
    cout << endl;
    list<string> l2{"cds", "dsf", "cdsfcdsf"};
    list<string>::iterator it2 = l2.begin();
    while (it2 != l2.end())
    {
        cout << (*it2) << " ";
        it2++;
    }
    l2.push_back("sss");  // inserting from backside
    l2.push_front("asd"); // inserting from front
    cout << "Totl size is: " << l2.size();
    return 0;
}