#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void findElements(){
vector<int> nums = {5,7,7,8,8,10};
vector<int> ans;
int target = 6;
int start=0;
int end=nums.size()-1;
while(start<=end){
int mid=start + (end-start)/2;
if(nums[mid] == target) {
    ans.push_back(mid);
}
if(nums[0] <= target && target <= nums[mid]){
end=mid-1;
}else{
    start=mid+1;
}
}
sort(ans.begin(), ans.end()); 

if(ans.size()==0){
    ans.push_back(-1);
    ans.push_back(-1);
}

 for(int i=0;i<nums.size();i++){
    nums[i]=ans[i];
 }
 
 for(int val : nums){
    cout<<val;
 }


}
int main() {
         findElements();   
    return 0;
}