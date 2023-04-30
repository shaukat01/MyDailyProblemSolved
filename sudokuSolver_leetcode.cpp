class Solution {
public:

  bool isSafe(int row,int col,vector<vector<char>>&board,char value){
      int n=board.size();
      for(int i=0;i<n;i++){
          //for row
          if(board[row][i]==value)
            return false;

            //for col
            if(board[i][col]==value)
             return false;

             //for 3*3 box check
             if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)]==value)
               return false;
      }
       return true;
  }

  bool solve(vector<vector<char>>&board){
      int n=board.size();

      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              //check for empty cell
              if(board[i][j]=='.'){
                  //filling the values from 1 to 9
                  for(char val='1';val<='9';val++){
                    if(isSafe(i,j,board,val)){
                        //safe hai tu insert kar du
                        board[i][j]=val;
                        //recursive call for remaining elements
                        bool remainingSolution=solve(board);  
                        if(remainingSolution==true){
                            return  true;
                        }
                        else{
                            //backtrack
                            board[i][j]='.';
                        }
                    }
                  }
                  //yaha pe 1 se 9 tak koi bhee solution nahi rakh paaye iska matlb peeche kahi galti hai peche jaake return false karo
               return false;
              }
          }
      }
      return true;
  }


    void solveSudoku(vector<vector<char>>& board) {
         solve(board);
    }
};