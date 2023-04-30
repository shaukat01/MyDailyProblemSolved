class Solution {
public:
  void solve(vector<string>&ans,int index,string output,string digits,vector<string>&mapping){
      //base condition
      if(index>=digits.length()){
          ans.push_back(output);
          return;
      }

      //solving one case
      int digit=digits[index]-'0'; //converting character into integer for a number
      string value=mapping[digit];
    //traversing each character one by one corrosponding to which number mapped
    for(int i=0;i<value.length();i++){
        char ch=value[i];
        output.push_back(ch);
        //recursive call
        solve(ans,index+1,output,digits,mapping);
        //backtracking
      output.pop_back();
    }

  }
    
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        //if string is empty
        if(digits.length()==0){
            return ans;
        }
        int index=0;
        string output="";
        vector<string>mapping(10);
        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";

     solve(ans,index,output,digits,mapping);
     return ans;
    }
};