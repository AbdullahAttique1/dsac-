#include <iostream>
#include<vector>
using namespace std;

bool isvalid( vector <int>  nums,int k, int mid ){

   int painters=1;
   int walls=0;
    for(int i =0;i<nums.size();i++){
   if(walls > mid) return false;
   if(nums[i] + walls <= mid){
    walls += nums[i];
   }else{
    painters ++;
  walls= nums[i];
   }
    }
    return painters <= k ? true : false ;
}
int painterAllocation(){
    vector <int>  nums={5, 10, 30, 20, 15};
    int k = 3;
     int sum=0;
    for(int i=0;i<nums.size();i++){
       sum+=nums[i];
    }
    int start=0 , end=sum , ans=-1;
    while(start<=end){
        int mid=start + (end-start)/2;
        if(isvalid(nums, k ,mid)){
          ans=mid;
          end=mid-1;
        }else{
       start=mid+1;
        }
    }
    return ans;
}
int main() {
    
    cout<<painterAllocation()<<endl;
            
    return 0;
}