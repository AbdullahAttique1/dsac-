#include <iostream>
#include<vector>
using namespace std;
int main() {
            vector<int> nums = {1,2,3,4};
            vector<int> resultvec;
            for(int i=0;i<=nums.size()-1;i++){
                       int result=1;
            for(int j=0;j<=nums.size()-1;j++){

                 
                if(nums[i]!= nums[j]){
                  
                    // cout<<"i: "<<nums[i]<<" j: "<<nums[j]<<endl<<endl;
                     result=result*nums[j];
                  
                }
                //  cout<<"result: "<<result;
          
            }
       
                 //cout<<"result: "<<result;
                 resultvec.push_back(result);
            cout<<endl;
            }

           
            for(int i=0;i<nums.size()-1;i++){
                nums[i]=resultvec[i];
            }
            for(int val : nums){

                cout<<val<<" ";
            }

    return 0;
}