#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void brutrSort(vector<int> &nums,int n){


for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if (nums[j] > nums[j+1]){
            swap(nums[j],nums[j+1]);
        }        
    }
    cout<<endl;
}


}


int main() {
         vector<int> nums={1,5,4,3,2};
         int n=nums.size();
brutrSort(nums,n);


for(int  val : nums){
    cout<<val<<endl;
}



    return 0;
}