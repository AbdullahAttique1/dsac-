#include <iostream>
#include<vector>
using namespace std;

 bool isValid(){
        return true;
    }

int allocateBook(){
   
vector<int> arr = {12, 34, 67, 90};
int k = 2;
int sum=0;
int ans;
for(int i=0;i<arr.size()-1;i++){
    sum+=arr[i];
}
int start=0;
int end=sum;

while(start<=end){
    int mid=start + (end-start)/2;
    if(isValid){
        ans=mid;
        end=mid-1;
    }else{
        start=mid+1;
    }
}

    return -1;
}
int main() {
    cout<<allocateBook()<<endl;        
    return 0;
}