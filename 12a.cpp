#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v;
    vector<int>::iterator it;
    for (int i = 0; i < 3; i++)
    {
        v.push_back(i);
    }
    while (1)
    {
        cout << "1.Find out Number of element in the vector: " << endl;
        cout << "2.check whether the vector is empthy or not: " << endl;
        cout << "3.Insert some elements into the vector: " << endl;
        cout << "4.Remove the element at a particular position: " << endl;
        cout << "5Find index of a particular element in vector: " << endl;
    int n;
        cin >> n;
        if (n == 1)
        {
            cout << "The number of element in the vector is: " << v.size() << endl;
        }
        else if (n == 2)
        {
            if (!v.empty()) // v.empty()- > boolean function (0,1)
            {
                cout << "Vector is not empty(): " << endl;
            }
            else
            {
                cout << "vector is  empty(): " << endl;
            }
        }
        else if (n == 3)
        {
            int ins;
            cout << "Enter the element to be push: " << endl;
            cin >> ins;
            v.push_back(ins);
        }
        else if (n == 4)
        {
            int rem;
            cout << "Enter the element to be removed: " << endl;
            cin >> rem;
            // cout << "Element to be removed at aparticular position is: " << endl;
            it = find(v.begin(), v.end(), rem);
            if (it != v.end())
            {
                v.erase(it);
            }
            else
            {
                cout << "Element is not found: " << endl;
            }
        }
        else if (n == 5)
        {
            cout << "Enter the element jiska index which i have to find: " << endl;
            int ele;
            cin >> ele;
            it = find(v.begin(), v.end(), ele);
            if (it != v.end())
            {
                cout << "Element found: " << it - v.begin() << endl;
            }
            else
            {
                cout << "Element not found: " << endl;
            }
        }
        else
        {
            cout<<"Exit"<<endl;     
            break;
        }
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}
