#include <iostream>
#include <vector>
using namespace std;
int merge(vector<int> &arr,int start,int mid,int end){
    vector<int> temp;
int i=start,j=mid+1;
int inversion=0;

while(i<=mid && j<=end){
    if(arr[i] <= arr[j]){
temp.push_back(arr[i]);
i++;
    }else{
        temp.push_back(arr[j]);
j++;
inversion+=mid-i+1;
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
    arr[start+i]=temp[i];
}
return inversion;

}
int helper(vector<int> &arr,int start,int end){
if(start<end){

    int mid=start+(end-start)/2;
  int letHalf=  helper(arr,start,mid);
  int rightHalf=  helper(arr,mid+1,end);
  int mainha= merge(arr,start,mid,end);
  return letHalf+rightHalf+mainha;
}
return 0;
    }
int main() {
    vector<int> arr={4,6,5,3,1,2};
   int inversions= helper(arr,0,arr.size()-1);
   cout<<inversions<<endl;

    
            
    return 0;
}