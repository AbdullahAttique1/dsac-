#include <iostream>
#include <vector>
using namespace std;
bool isFind(vector<int> nums,int target,int idx){
if(idx == nums.size()){
    return false;
}
  if(nums[idx]==target) return true;

  return isFind(nums,target,idx+1);
    
}
int main() {
    vector<int> nums=  {5,3,7,1};
    int target = 7 ;
    cout<<isFind(nums,target,0)<<endl;
            
    return 0;
}