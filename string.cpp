#include<bits/stdc++.h>
using namespace std;

bool comString(string a,string b){
  if(a.length()!=b.length()){
    return false;
  }
  else{
    int j=0;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[j]){
            return false;
        }
        j++;
    }
  }
  return true;

}


int main(){
    
//     string str;
//     // cin>>str;
//     getline(cin,str);
//     cout<<str.length()<<endl;
//     cout<<str.empty()<<endl;
//     str.push_back('A');
//     cout<<str<<endl;
//   str.pop_back();
//   cout<<str<<endl;
//    cout<<str.substr(0,4)<<endl;
//    cout<<str<<endl;

// string a ="Love";
// string b="love";
// if(a.compare(b)==0){    //tis function is case sensitive
//     cout<<"a and b are equal"<<endl;
// }
// else{
//     cout<<"a and b are not aqual"<<endl;
// }
//   string x="bbcd";
//   string y="abcd";
//   cout<<x.compare(y)<<endl;  //chutiya function be careful

// string sentence="Hello ji kaise huu";
// string target="o j  ";
// cout<<sentence.find(target)<<endl;
 
    // string str="This is love babbar:"<<en;
    // str.replace(11,6,"anuj");
    // cout<<str<<endl;
    string str="this is love babbart: ";
    str.erase(5,3);

    cout<<str<<endl;
    return 0;
}