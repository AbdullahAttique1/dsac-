#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void findNextPermutaion(vector<int> &nums,int size){
 
     int permitize=-1;
    for(int i=size-2;i>=0;i--){
        if(nums[i] < nums[i+1] ){
            permitize=i;   
            break;      
        }
    }

    if(permitize == -1 ){
        reverse(nums.begin(), nums.end());
        return;
    }

   for(int i=size-1;i>=permitize;i--){
        if(  nums[i]   >  nums[permitize]  ){
            swap(nums[i],  nums[permitize] );
            break;      
        }
    }


int i=permitize+1;
int j=size-1;
while(i<=j){
    swap(nums[i], nums[j]);
    i++;
    j--;
}
    

for(int val :nums){
    cout<<val;
}
}
int main() {
        vector<int> nums = {1,2,3};   
        int size=nums.size();
findNextPermutaion(nums,size);
    return 0;
}