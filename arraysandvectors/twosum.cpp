//two sum leetcode
#include <iostream>
#include<vector>
using namespace std;
int main() {
      vector<int> nums={1,2,3,4,5};
      vector<int> resultArr;
    
   int target =9;
   int n=5;
   for(int i=0;i<n;i++){
    int result=0;
    for(int j=i+1;j<n;j++){
   result=nums[i]+nums[j];
if(result==target){

 resultArr.push_back(nums[i]);
  resultArr.push_back(nums[j]);
    break;
    
}

    }
      cout<<endl;
   
   }        
   
   
   for(int val : resultArr){
    cout<<val;
   }
   
    return 0;
}

//first run  loop that print 
