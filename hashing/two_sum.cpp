#include <iostream>
#include <vector>
using namespace std;
int main() {
   vector<int> nums = {2,7,11,15};
   vector<int>ans;
   int target = 9;

   int start=0,end=nums.size()-1;
   

   while(start<=end){
if(nums[start]+nums[end] == target){
    ans.push_back(nums[start]);
    ans.push_back(nums[end]);
         break;
} 

if(nums[start]+nums[end] < target){
start++;
}else{
    end--;
}
   }
for(int val : ans){
    cout<<val;
}
            
    return 0;
}