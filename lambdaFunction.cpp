#include <bits/stdc++.h>
using namespace std;

int main()
{
    // lambda function
    cout << [](int x)
    { return x + 2; }(2)
         << endl;
    //  method 1
    cout << [](int x, int y)
    { return x + y; }(2, 5)
         << endl;
    //  method 2
    auto sum = [](int x, int y)
    { return x + y; };
    cout << sum(2, 5) << endl;
    // inbuilt STL function
    vector<int> v = {1, 2, 4};
    cout << all_of(v.begin(), v.end(), [](int x)
                   { return x > 0; })
         << endl;
    // saara positive tu return true means 1 warna false means 0
    cout << any_of(v.begin(), v.end(), [](int x)
                   { return x > 0; })
         << endl; // ek bhe positive hai tu return true warna false
    cout << none_of(v.begin(), v.end(), [](int x)
                    { return x > 0; })
         << endl; // isme saara negative hooga tu true return karega
    return 0;
}
