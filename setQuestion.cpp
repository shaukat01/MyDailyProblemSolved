#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<string> s;
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cout << "Enter the string: "<<endl;
        cin >> str;
        s.insert(str);
    }
    for (string value : s)
    {
        cout << value << endl;
    }
    return 0;
}
