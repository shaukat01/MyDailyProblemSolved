#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    m[5] = "abc";
    m[8] = "deg";
    m[1] = "hyt";
    // or
    m.insert({4,"gtf"});
    //   using iterator
    map<int, string>::iterator it = m.begin();
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // // without using iterator with the help of auto
    // for (auto it = m.begin(); it != m.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // // using range based loop
    // for (auto value : m)
    // {
    //     cout << value.first << " " << value.second << endl;
    // }

    // Inbuilt function in map
    auto it = m.find(8); // it return iteraror
    if (it == m.end())
    {
        cout << "No value is found" << endl;
    }
    else
    {
        cout << it->first << " " << it->second << endl;
    }
       
      m.erase(8);
     m.erase(it);
     //if erasing key and itearator is not present then it shows segmentation faul so to avoid it we use restriction in it
      m.clear();//works in all and delete all the map elemants elenmants
    return 0;
}
