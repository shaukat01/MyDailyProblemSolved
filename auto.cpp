#include <iostream>
#include <vector>
using namespace std;

int main()
{
    auto a = 2;
    cout << a << endl;
    auto b = 2.9;
    cout << b << endl;

    // auto iteators in vector
    vector<int> v = {1, 2, 3, 4};
    // vector<int>::iterator it = v.begin();  //auto automatically understand iterator is of vector so no use of this line
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    // auto in pair vctor
    vector<pair<int, int>> v_p = {{1, 2}, {5, 9}, {7, 4}};
    //   vector<pair<int ,int >>::iterator it=v_p.begin();
    for (auto it = v_p.begin(); it != v_p.end(); it++)
    {
        //    cout<<(*it).first<<" "<<(*it).second<<endl; 
        // or
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}