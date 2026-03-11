#include <iostream>
#include<vector>
using namespace std;

int  singleElemeant(){
vector<int> nums = {1,1,2,3,3,4,4,8,8};    
      int start=0;
      int end=nums.size()-1;
      while(start<=end){
     int mid=start+(end-start)/2;
     if(mid > 0 && mid < nums.size()-1){

       if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1] ) return mid;
      }
     if(mid%2==0){//even case
    if(mid < nums.size()-1 && nums[mid] == nums[mid+1]){
          start=mid+2;
    
    }else{
    end=mid-1;
    }
     }else{
   if(nums[mid] == nums[mid-1]){ // changed
                start = mid + 1;
            }else{
                end = mid - 1;
            }
     }
      }
      return -1;
}

int main() {
      cout<<singleElemeant()<<endl;
      
    return 0;
}