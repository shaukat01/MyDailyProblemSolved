#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    // method 1 to obtain output
    for (string value : s)
    {
        cout << value << endl;
    }
    //   method to optain output
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
}
int main()
{
    // multi set stored dublicate key
    multiset<string> s;
    s.insert("vdf"); // O(log(1))
    s.insert("abc");
    s.insert("abdf");
    s.insert("abdfdc");
    s.insert("abdfdc");

    // deletion
    //  method 1 using iterator
    auto it = s.find("abc");
    if (it != s.end())
    {
        s.erase(it); // it deletes only one which is predent at top
    }
    // method 2 using passing direct value
    s.erase("abdf"); // it deletes all the dublicate of abdf
    print(s);
    return 0;
}