#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
   vector<int> nums = {2,7,11,15};
   int target=9;
   vector<int> ans;
   unordered_map<int,int> m;
   
for(int i=0;i<nums.size();i++){
   int first_val=nums[i];
   int second_val=target-first_val;
   if(m.find(second_val) != m.end() ){
ans.push_back(i);
ans.push_back(m[second_val]);
 break;
   }

   m[first_val]=i;
  

}
  
            
    return 0;
}