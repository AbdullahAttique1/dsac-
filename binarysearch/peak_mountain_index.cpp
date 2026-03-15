#include <iostream>
#include<vector>
using namespace std;
int peakIndex(){
    vector <int> arr = {0,2,1,0};
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
      int mid=start + (end-start)/2;
      if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1] ) return mid;
     if(arr[0] <arr[mid]){
        start=mid+1;
     }else{
        end=start+1;
     }
    }
return -1;
}
int main() {

          cout<<peakIndex()<<endl;  
    return 0;
}