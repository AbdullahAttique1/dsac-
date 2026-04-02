#include <iostream>
#include<vector>
using namespace std;
bool recurBinary(vector<int> nums,int target,int start,int end){
    if(start>end)return false;
    int mid=start+(end-start)/2;
    if(target==nums[mid])return true;
    if(target<nums[mid]){
       return recurBinary(nums,target,start,mid-1);
    }else{
      return  recurBinary(nums,target,mid+1,end);
    }
return false;
}
int main() {
vector<int> nums={-1,0,3,5,9,12};
int target=9;
int start=0,end=nums.size()-1;
cout<<recurBinary(nums,target,start,end)<<endl;
            
    return 0;
}