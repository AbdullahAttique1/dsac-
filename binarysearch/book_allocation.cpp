#include <iostream>
#include<vector>
using namespace std;

 bool isValid(vector<int> arr, int k, int mid){
    int students=1;
    int pages=0;
    int sum=0;
 for(int i=0;i<arr.size();i++){
    if(arr[i]> mid ) return false;
    if(pages + arr[i] <=mid ){
        pages+=arr[i];
    }else{
        students ++;
  pages=arr[i];
    }
    
}
        return students <= k ? true :false;
    }

int allocateBook(){
   
vector<int> arr = {12, 34, 67, 90};
int k = 2;
int sum=0;
int ans;
for(int i=0;i<arr.size();i++){
    sum+=arr[i];
}
int start=0;
int end=sum;

while(start<=end){
    int mid=start + (end-start)/2;
    if(isValid(arr,k,mid)){
        ans=mid;
          end=mid-1;       
    }else{
       start=mid+1;
    }
}

    return ans;
}
int main() {
    cout<<allocateBook()<<endl;        
    return 0;
}