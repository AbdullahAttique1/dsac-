#include <iostream>
#include<vector>
using namespace std;
int main() {
   vector<int> nums={1,2,3,4,5};
   vector<int> ans;
   int n=5;
   int target=9;

   int i=0;         
   int j=n-1;
   int sum=0;
   while(i<j){
    sum=nums[i]+nums[j];
    if(sum<target){
        i++;
    }else if(sum>target){
        j--;
    }  else{
       
            ans.push_back(i);
            ans.push_back(j);
            break;
     
       
    }
   }
  
    for(int val : ans){
        cout<<val;
    }
      return 0;
}