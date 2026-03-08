#include <iostream>
#include<vector>
using namespace std;
int findTarget( vector<int> arr,int tar){
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid=start + (end - start) / 2;
        if(tar<arr[mid]){
            end=mid-1;
        }else if(tar>arr[mid]){
            start=mid+1;
        }else{
            return mid;
        }
    
    }
    return 1;
}
int main() {
 vector<int> arr={1,4,8,12,32,64,72,92};
 int tar=12;           
 cout<<findTarget(arr,tar);
    return 0;
}