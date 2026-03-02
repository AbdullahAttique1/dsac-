#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main() {
        vector<int> nums={2,1,2,2,1};
        int n=nums.size();
        int frequency=1;
     sort(nums.begin(), nums.end());
        for(int i=0;i<n-1;i++){
           if(nums[i] == nums[i+1]){
            frequency++;
           }else{
            frequency=1;
           }

           if(frequency>n/2){
            cout<<nums[i];
            return nums[i];
            break;
           }

        }

       

    return 0;
}