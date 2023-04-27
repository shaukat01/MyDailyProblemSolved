//TLE hai isme
class Solution {
public:
  int helper(vector<int>&nums,int i){
      if(i>=nums.size()){
          return 0;
      }
      int robHou1=nums[i]+helper(nums,i+2);
      int robHou2=0+helper(nums,i+1);
    
       return max(robHou1,robHou2);
  }
    int rob(vector<int>& nums) {
       return helper(nums,0);
    }
};