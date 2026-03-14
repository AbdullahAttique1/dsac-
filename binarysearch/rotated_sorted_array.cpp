#include <iostream>
#include<vector>
using namespace std;
int findTarget(){
    vector <int> nums = {4,5,6,7,0,1,2};
    int target = 0;
 int start=0;
 int end=nums.size()-1;
 while(start<=end){
int mid=start + (end-start)/2;
if(nums[mid]==target) return mid;

cout<<mid;

if(nums[0] < nums[mid]){//left sort
    if(nums[0] < target < nums[mid]){
        end=mid-1;
    }else{
        start=mid+1;
    }

}else{//right sort
 if(nums[mid] < target < nums[end]){
       start=mid+1;
    }else{
          end=mid-1;
    }
}

 }

 return -1;

}
int main() {
           cout<<findTarget()<<endl; 
    return 0;
}