#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    // method 1 to obtain output
    for (string value : s)
    {
        cout << value << endl;
    }
    //   method 2 to optain output
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
}
int main()
{
    set<string> s;
    s.insert("vdf");  //O(log(n))
    s.insert("abc");
    s.insert("abdf");
    s.insert("abdfdc");

    // find the string ==O(log(n))
    //  auto it = s.find("abc"); // find returnb iterator
    //  if (it != s.end())
    //  {
    //      cout << (*it) << endl;
    //  }
    //  cout << (*it) << endl;

    // deleting the key
    // method 1 to deleting the element by taking iterator
    auto it = s.find("abc");
    if (it != s.end())
    {
        s.erase(it);
    }
    //method 2 deleting the element by taking directly
    s.erase("abdf");
    print(s);
    return 0;
}