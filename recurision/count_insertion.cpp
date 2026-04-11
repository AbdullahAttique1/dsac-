#include <iostream>
#include <vector>
using namespace std;
int insertion(vector<int> &arr,int indx){
     int count=0;
    if(indx == arr.size()){
        return 0;
    }
   
    for(int i=indx+1;i<arr.size();i++){

        if(arr[indx] > arr[i] && indx < i){
            count++;
        }

    }
    
    return count + insertion(arr, indx+1);
}
int main() {
vector<int> arr={6,3,5,2,7};
int insertionCount= insertion(arr,0);   
cout<<insertionCount<<" ";         
    return 0;
}