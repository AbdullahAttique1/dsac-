#include <iostream>
#include<vector>
using namespace std;
int peakIndex(){
    vector<int>  arr = {0,3,8,9,5,2};
    int start=1;
    int end=arr.size()-1;
    while (start<=end){
      int mid=start + (end-start)/2;
   
if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
    return mid;
    break;
}else if(arr[mid] > arr[mid-1]){
    start=mid+1;
}else{
end=mid-1;
}

    }
return -1;    
}
int main() {
    cout<<peakIndex()<<endl;
            
    return 0;
}