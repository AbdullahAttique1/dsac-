#include <iostream>
#include<vector>
using namespace std;

int isValid( vector <int> &nums,int mid, int m){
    int painter=1;
    int walls=0;
for(int i=0;i<nums.size();i++){
    if(nums[i] > mid) return false;
if(walls + nums[i] <= mid){
    walls+=nums[i];
}else{
    painter++;
    walls=nums[i];
}
}

   return painter>m?false:true;
}

int allocation(){
    vector <int> nums={40,30,10,20};
    int m=2;
    int n=nums.size();
    int start=0;
    int sum=0;    
    for(int i=0;i<n ;i++){
        sum+=nums[i];
    }
  int  end=sum;
  int ans=-1;


    while (start<=end){
     int mid=start + (end-start)/2;
if(isValid(nums,mid,m)){
ans=mid;
end=mid-1;
        }else{
            start=mid+1;
}
    }
    
    return ans;
}

int main() {
            
    cout<<allocation()<<endl;
    return 0;
}