#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string> &board,int row,int col,int n ){
for(int j=0;j<n;j++){
    if(board[row][j] == 'Q'){
        return false;
    }
    }
    for(int i=0;i<n;i++){
    if(board[i][col] == 'Q'){
        return false;
    }
    }

    for(int i=row, j=col; i>=0 && j>=0;i--,j-- ){
            if(board[i][j] == 'Q'){
        return false;
    }
    }

      for(int i=row, j=col; i>=0 && j<n;i--,j++ ){
            if(board[i][j] == 'Q'){
        return false;
    }
    }
return true;
} 
void nqunes( vector<string> &board,int row, int n, vector<vector<string>> &ans ){
    if(row==n){
        ans.push_back({board});
        return ;
    }

    for(int j=0;j<n;j++){
        if(isSafe(board, row,j,n)){

       
        board[row][j]  ='Q';
        nqunes(board,row+1,n,ans);
        board[row][j]='.';
    }
 }
}
int main() {
    int n = 4;
    vector<string> board(n,string(n,'.'));
     vector<vector<string>> ans;
     nqunes(board,0,n,ans);
   
     for(auto &board : ans){
        for(auto &row : board){
            cout << row << endl;
        }
        cout << endl;
    }
            
    return 0;
}