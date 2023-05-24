#include <iostream>
#include <vector>
using namespace std;

 //method 1
//   void print(vector<pair<int,int>>&v){
//      for(int i=0;i<v.size();i++){
//          cout<<v[i].first<<" "<<v[i].second<<endl;
//      }
//     //  cout<<endl;
//   }
// int main()
// {
//     vector<pair<int, int>> v = {{1, 2}, {5, 6},{8, 15}};
//   print(v);
//     return 0;
// }

// method 2
void print(vector<pair<int,int>>&v){
     for(int i=0;i<v.size();i++){
         cout<<v[i].first<<" "<<v[i].second<<endl;
     }
     cout<<endl;
  }
int main(){
    vector<pair<int, int>> v;
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<"Enter the value of x and y: "<<endl;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        //or
        // v.push_back(make_pair(x,y));
    }
    print(v);
    return 0;
}