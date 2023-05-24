#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //  iteators in vector
    // vector<int> v = {1, 2, 3, 4};
    // vector<int>::iterator it = v.begin();
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << " ";
    // }
  
    // iterator in case of pair inside vector
    vector<pair<int ,int >>v_p={{1,2},{5,9},{7,4}};
      vector<pair<int ,int >>::iterator it=v_p.begin();
      for(it=v_p.begin();it!=v_p.end();it++){
       cout<<(*it).first<<" "<<(*it).second<<endl;
       //or
    //    cout<<it->first<<" "<<it->second<<endl;
      }
    return 0;
}