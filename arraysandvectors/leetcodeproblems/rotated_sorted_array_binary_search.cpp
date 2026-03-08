#include <iostream>
#include<vector>
using namespace std;

int getTarget(){
 vector<int>    nums = {4,5,6,7,0,1,2};
       int   target = 0;
int start =0;
int end=nums.size()-1;
while(start<=end){
    int mid=start +(end-start)/2;
     if(target == nums[mid]){
                return mid;
            } 
    if(nums[start] < nums[mid] ){  //leftsort
      if(nums[start] <= target && target < nums[mid]){      
          
                   end=mid-1;
           
        }else {
            start=mid+1;
        }

    } else { //right sort
          if(nums[mid] < target && target <= nums[end]){
           end=mid-1;
        }else{
              start=mid+1;
        }

    }    

}
return -1;

}

int main() {
   
cout<<getTarget()<<endl;
    return 0;
}