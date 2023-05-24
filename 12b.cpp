#include <bits/stdc++.h>
using namespace std;

// template <class t>

int main()
{
    vector<int> v;
    int sum = 0;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        int k = rand() % 100+1;
        v.push_back(k);
        sum = sum + k;
    }
    sort(v.begin(),v.end(),greater<int>());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Sum is: " << sum << endl;

    return 0;
}