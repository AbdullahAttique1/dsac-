#include <iostream>
#include<vector>
using namespace std;
int main() {
        vector<int> nums={1,2,2,1,1}; 
        int n=nums.size();
        int frequency=0,ans=nums[0];
        for(int i=0;i<n;i++){
            if(frequency==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                frequency++;
            }else{
                frequency--;
            }
        }
cout<<ans;
    return ans;
}