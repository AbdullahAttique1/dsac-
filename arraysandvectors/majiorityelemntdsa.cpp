#include <iostream>
#include<vector>
using namespace std;
int main() {
vector<int> nums = {2, 1, 2, 1, 1};
int n=nums.size(); 
for(int val : nums){
    int frequency=0;
    for(int el : nums){
        if(val==el){
            
           frequency++;
        }
    }
    if(frequency>n/2){
        cout<<val;
        return val;
    }
}          


    return 0;
}