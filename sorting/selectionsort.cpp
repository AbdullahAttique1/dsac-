#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
void selectionSort(vector<int> nums, int n){
for(int i=0;i<n-1;i++){
    int smallestIndex=i;
    for(int j=i+1; j<n;j++){
        if(nums[j] < nums[smallestIndex] ){
            smallestIndex=j;
        }
    }

    swap(nums[i], nums[smallestIndex]);

}
}
int main() {
    vector<int> nums={1,4,5,3,2};
    int n=nums.size();
    selectionSort(nums,n); 
    for(int val : nums){
        cout<<val;
    }   
    return 0;
}