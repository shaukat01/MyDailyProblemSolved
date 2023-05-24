#include <bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s)
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
    unordered_set<string> s;
    s.insert("vdf"); // O(log(1))
    s.insert("abc");
    s.insert("abdf");
    s.insert("abdfdc");
    print(s);
    return 0;
}