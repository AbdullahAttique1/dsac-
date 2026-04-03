#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int> nums,int idx){
if(idx==nums.size()-1){
    return true;
}
for(int i=0;i<nums.size();i++){
if(nums[i] > nums[i+1] ){
    return false;
}


}
isSorted(nums,idx+1);
return false;
}
int main() {
    vector<int> nums={1,2,3,4};

          cout<<isSorted(nums,0)<<endl;
    return 0;
}