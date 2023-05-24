#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m)
{
    for (auto &value : m)
    {
        cout <<value.first<< " " << value.second <<endl;
    }
}
int main()
{
    //unordered_map uses has table and ordrerd map uses map
    // it in not in ordered printing but map is in ordered print

    unordered_map<int, string> m;
    m[1] = "abc"; //O(1)
    m[8] = "ndf";
    m[4] = "fduh";
    print(m);
    return 0;
}