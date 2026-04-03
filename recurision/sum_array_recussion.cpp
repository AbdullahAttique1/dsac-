#include <iostream>
#include <vector>
using namespace std;
int sumAray(vector<int> nums,int idx){
   
if(idx==nums.size()){
        return ;
}



return nums[idx]+ sumAray(nums,idx+1);
}

int main() {
    vector<int> nums={1,2,3,4};
cout<<sumAray(nums,0);
            
    return 0;
}