#include<bits/stdc++.h>
using namespace std;

void printsolution(vector<vector<int>>&board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool isSafe(int row,int col,vector<vector<int>>&board,int n){
    int i=row;
    int j=col;
    //checking row
    while(i>=0){
        if(board[i][j]==1){
            return false;
        }
        j--;
    }
    //checking upper left diagonal
     i=row;
     j=col;
   while(i>=0 && j>=0){
    if(board[i][j]==1){
        return false;
    }
    i--;
    j--;
   }
    //checking lower left diagonal
     i=row;
     j=col;
    while(j>=0 && i<n){ 
          if(board[i][j]==1){
            return false;
          }
          i++;
          j--;
    }
    //kahi pe bhee queeen nahi meela isliye ab queen rakh skate hai
    return true;
}

void solve(vector<vector<int>>&board,int col,int n,int row){
  //base case
 if(col>=n){
    printsolution(board,n);
    return;
 }
 //solve one case
 for(int row=0;row<n;row++){
    if(isSafe(row,col,board,n)){
       //rakh do
       board[row][col]=1;
       //recursive call
       solve(board,col+1,n,row);
       //backtrack
       board[row][col]=0; 
    }
 }
}


int main(){
  int n=4;
  vector<vector<int>>board(n,vector<int>(n,0));
  //0-> means empty 
  //1-> queen at the cell
  int row=0;
  int col=0;
  solve(board,col,n,row);
 


    return 0;
}

