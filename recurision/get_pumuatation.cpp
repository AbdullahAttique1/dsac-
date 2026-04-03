#include <iostream>
#include <vector>
using namespace std;
void getPermute(vector<int> &nums,int idx, vector<vector<int>>&ans ){
if(idx==nums.size()){
ans.push_back({nums});
    return;
}

for(int i=idx;i<nums.size();i++){
    swap(nums[i],nums[idx]);
     getPermute(nums,idx++,ans);
     swap(nums[i],nums[idx]);

}
}
int main() {
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    getPermute(nums,0,ans);
            
    return 0;
}