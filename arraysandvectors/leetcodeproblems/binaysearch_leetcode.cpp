#include <iostream>
#include<vector>
using namespace std;
 int binarySearch(){
    vector <int> nums = {-1,0,3,5,9,12};
        int target = 9;
 
 int start=0;
 int end=nums.size()-1;
 while(start<=end){
    int mid=start+(end-start)/2;
    if(nums[mid]==target) return mid;
    target > nums[mid] ? start=mid+1 : end=mid-1;

    
 }
return -1;

 }
int main() {
        cout<<binarySearch()<<endl;    
    return 0;
}