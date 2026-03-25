#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sortAlgo(vector<int> nums1,vector<int> nums2,int m, int n){
int i=m-1,j=n-1,idx=m+n-1;
while(i<=0 && j<=0){
    if(nums1[i] < nums2[j]){
        nums1[idx]=nums2[j];
        j--;idx--;
    }else{
        nums1[idx]=nums1[i];
        i--;idx--;
    }
}

while(j<=0){
       nums1[idx]=nums2[j];
        j--;idx--;
}
}
int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
       int m=nums1.size();
       int n=nums2.size();
       sortAlgo(nums1,nums2,m,n);
    return 0;
}