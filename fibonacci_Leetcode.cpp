class Solution {
public:

    //recusrsive solution
    // int rec(int n) {
    //     if(n==1 ||n==0){
    //         return n;
    //     }
    //     int ans=rec(n-1) + rec(n-2);
    //       return ans;
    // }


// int topDown(int n,vector<int> &dp){
    
//         if(n==1 || n==0){
//             return n;
//         } 

//         //step 3
//         // check if ans already exit
//         if(dp[n]!=-1){
//             return dp[n];
//         }

//         //step 2
//         dp[n]=topDown(n-1,dp) + topDown(n-2,dp);
           
//            return dp[n];

// }


  int bottomUp(int n){
      //step 1
      vector<int>dp(n+1,-1);
      //step 2
      dp[0]=0;
      if(n==0){
          return dp[0];
      }
      dp[1]=1;

      //step 3
      for(int i=2;i<=n;i++){
          dp[i]=dp[i-1] + dp[i-2];
      }
      return dp[n];
  }

  int spaceOptimi(int n){
      
    int prev2=0;
    int prev1=1;
 //step 2
    if(n==0){
        return prev2;
    }
    if(n==1){
        return prev1;
    }

    int curr;
    //step 3
    for(int i=2;i<=n;i++){
      curr=prev1 + prev2 ;
        
      //shifting
      prev2=prev1;
      prev1=curr;

    }
    return curr;
  }


    int fib(int n){
      
    // //step1 
    // vector<int>dp(n+1,-1);
    
    // int ans=topDown(n,dp);
    //   int ans=bottomUp(n);

        int ans=spaceOptimi(n);
    return ans;
    }
};