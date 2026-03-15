#include <iostream>
#include<vector>
using namespace std;
int findSigleElement(){
vector<int> nums = {1,1,2,3,3,4,4,8,8};

int start=0;
int end=nums.size()-1;
while(start<=end){
    int mid=start + (end-start)/2;
if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return mid;
if(mid%2==0){//even case
if(nums[mid] == nums[mid-1]){
    end=mid-1;
}else{
    start=mid+1;
}
}else{//odd case
 if(nums[mid] == nums[mid+1]){
    start=mid+1;
}else{
    end=mid-1;
}
}

}

    return -1;
}
int main() {
            cout<<findSigleElement()<<endl;
    return 0;
}