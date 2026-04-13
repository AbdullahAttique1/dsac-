#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<vector<int>> &arr,int row,int col,int n,int expVAl){
    if(row<0 || col < 0  || row>=n || col>=n  || arr[row][col] != expVAl){
        return false;
    }
    if(expVAl == n*n-1){
        return true;
    }

bool ans1=isValid(arr,row-2,col+1,n,expVAl+1);
bool ans2=isValid(arr,row-1,col+2,n,expVAl+1);
bool ans3=isValid(arr,row+1,col+2,n,expVAl+1);
bool ans4=isValid(arr,row+2,col+1,n,expVAl+1);
bool ans5=isValid(arr,row+2,col-1,n,expVAl+1);
bool ans6=isValid(arr,row+1,col-2,n,expVAl+1);
bool ans7=isValid(arr,row-1,col-2,n,expVAl+1);
bool ans8=isValid(arr,row-2,col-1,n,expVAl+1);
return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;

}
int main() {
    //first fing all 8 moves that night can move 
    //check is the next move exict 
 vector<vector<int>> arr={{0,11,16,5,20},{17,4,19,10,15},{12,1,8,21,6},{3,18,23,14,9},{24,13,2,7,22}}; 
int n=arr.size();
int expVAl=0;
 cout<<isValid(arr,0,0,n,expVAl);
 //first move will be arr[0][0]

            
    return 0;
}