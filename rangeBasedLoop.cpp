#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // normal using vector
    vector<int> v1 = {1, 2, 3, 4};
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // range based loops
    for (int value : v1)
        // normal using vector
        vector<int> v1 = {1, 2, 3, 4};
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // range based loops
    for (int value : v1)
    {
        cout << value << " ";
    }
    cout << endl;

    // using iterator
    vector<int> v2 = {2, 5, 7, 8};
    vector<int>::iterator it = v2.begin();
    for (it = v2.begin(); it != v2.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    // range based loops
    for (int value : v2)
    {
        cout << value << " ";
    }
    cout << endl;
    {
    }
    cout << endl;

    // using iterator
    vector<int> v2 = {2, 5, 7, 8};
    vector<int>::iterator it = v2.begin();
    for (it = v2.begin(); it != v2.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    // range based loops
    for (int value : v2)
    {
        cout << value << " ";
    }
    cout << endl;

    // range based loops
    vector<int> v3 = {1, 2, 3, 4};
    for (int value : v3) // v3 kee copy huu rahee hai
    {
        cout << value << " ";
    }
    cout << endl;

    // in vector pair
    vector<pair<int, int>> v_p = {{1, 2}, {4, 5}, {8, 7}};
    for (pair<int, int> value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }
    return 0;
}