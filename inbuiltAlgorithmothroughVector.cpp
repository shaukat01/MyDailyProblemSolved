#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    vector<int> v(n);
    cout << "Enter the array elements of vector: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int min = *min_element(v.begin(), v.end());
    cout << "Minimum element is: " << min << endl;
    int max = *max_element(v.begin(), v.end());
    cout << "maximum element is: " << max << endl;
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "The summation of all given input is: " << sum << endl;
    int ct = count(v.begin(), v.end(), 3);
    cout << "The counting is: " << ct << endl;
    int ele = *find(v.begin(), v.end(), 10);
    cout << "The finding element is: " << ele << endl;
    reverse(v.begin(), v.end());
    cout << "The reversing element is: " << endl;
    for (auto value : v)
    {
        cout << value << " ";
    }
    cout << endl;
    // reverse in string
    string s = "abfjdfdi";
    cout << "The everse string is: " << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
