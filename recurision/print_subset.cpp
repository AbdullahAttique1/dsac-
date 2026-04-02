#include <iostream>
#include <vector>
using namespace std;
void printSub(vector<int>  &nums , vector<int> &ans,int i){
    if(i==nums.size()){
for(int val :ans){
    cout<<val<<' ';
}
cout<<endl;
        return ;
    }

ans.push_back(nums[i]);
printSub(nums,ans,i+1);

ans.pop_back();

printSub(nums,ans,i+1);


}
int main() {
    vector<int>  nums = {1,2,3};
    vector<int> ans;
    printSub(nums,ans,0);
            
    return 0;
}
