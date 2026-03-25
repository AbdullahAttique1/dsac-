#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void sortAlgo(  vector<int> nums, int size){
 int heigh=size-1, low=0,mid=0;
 while(mid  <=heigh){
    if(nums[mid] == 0){
        swap(nums[mid], nums[low]);
        low++;
        mid++;
    }else if(nums[mid] == 1){      
        mid++;
    }else{
           swap(nums[mid], nums[heigh]);
        heigh--;
    }
 }
}
int main() {
    vector<int> nums={2,0,2,1,1,0,1,2,0,0};     
    int size=nums.size();
sortAlgo(nums, size);

for(int val : nums){
    cout<<val;
}
    return 0;
}