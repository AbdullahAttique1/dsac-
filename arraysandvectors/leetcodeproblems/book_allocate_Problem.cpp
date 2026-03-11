#include <iostream>
#include<vector>
using namespace std;


int isavalid(int mid,int m,vector<int> arr){
int student=1;
int pages=0;
for(int i=0;i<arr.size();i++){
    if(arr[i] > mid) return false;
if(pages+arr[i]<=mid){
    pages+=arr[i];
}else{
    student++;
    pages=arr[i];
}
}
return student<=m ? true : false;
}

int allocateBokks(){
    vector<int> arr={ 12, 34, 67, 90};
    int k=2;
    int sum=0;
    int ans=-1;
    for(int i=0; i<arr.size();i++){
        sum+=arr[i];      
    }
    int start=0;
    int end=sum;
    
while (start<=end){
    int mid=start + (end-start)/2;
    if(isavalid(mid,k,arr)){
        ans=mid;
        end=mid-1;
    }else{
start=mid+1;
    }

}


    return ans;
}
int main() {
    cout<<allocateBokks()<<endl;        
    return 0;
}