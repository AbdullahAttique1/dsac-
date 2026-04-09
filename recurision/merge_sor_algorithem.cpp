#include <iostream>
#include <vector>
using namespace std;
void merge( vector<int> &arr,int start,int mid,int end){
    vector<int> temp;
int i=start;
int j=mid+1;

while(i<=mid && j<=end){
    if(arr[i] <= arr[j]){
  temp.push_back(arr[i]);
  i++;
    }else{
        temp.push_back(arr[j]);
        j++;
    }
}

while(i<=mid){
     temp.push_back(arr[i]);
  i++;
}

while(j<=end){
     temp.push_back(arr[j]);
  j++;
}

for(int i=0;i<temp.size();i++){
    arr[start + i]=temp[i];
}
}

void helper( vector<int> &arr,int start,int end){

    int mid=start+(end-start)/2;
if(start<end){

    helper(arr,start,mid); 
    helper(arr,mid+1,end);
    
    merge(arr,start,mid,end);
}

}
int main() {
         vector<int> arr={12,31,35,8,34,40};
         
         int end=arr.size()-1;
         helper(arr,0,end);   
         for(int val : arr){
            cout<<val;
         }
    return 0;
}