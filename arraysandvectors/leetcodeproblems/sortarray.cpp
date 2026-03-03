#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;



vector<int> getArray() {
    vector<int> arr;
    return arr;  
}

int main() {
    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};
   vector<int> result = getArray();
    int m;
    int n;

 m = 3;
 
 n = 3 ;     
 
 for(int i=0;i<m;i++){

    result.push_back(nums1[i]);
 }
 for(int j=0;j<n;j++){
    
     result.push_back(nums2[j]);
 }

 sort(result.begin(),result.end());


 for(int  val : result){
    cout<<val;
 }

 return 0;
   
}