#include <iostream>
#include <vector>
using namespace std;

bool rowsearchTarget(vector<vector<int>> &matrix,int target,int row){
    int m=matrix[0].size();
    int start=0,end=m-1;
    while(start<=end){
        int mid=start + (end-start)/2;
        if(matrix[row][mid]==target) return true;
        if(target<matrix[row][mid]){
end=mid-1;
        }else{
            start =mid+1;
        }
    }
    return false;
} 
bool searchVector( vector<vector<int>> &matrix,int target){
    int start=0,end=matrix.size()-1;
    int m=matrix[0].size();


    while(start<=end){
int mid=start + (end-start)/2;
if(matrix[mid][0] <=  target &&  target <= matrix[mid][m-1]){
//find the row now find the target in row
if(rowsearchTarget(matrix,target,mid)){
    return true;
}


}else if( target > matrix[mid][m-1]){
    start=mid+1;
}else{
    end = mid-1;
}

    }
   

    
    return false;
}
int main() {
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}} ;
    int target = 3;
    cout<<searchVector(matrix,target)<<endl;
    return 0;
}