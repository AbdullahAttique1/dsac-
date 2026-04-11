#include <vector>
#include <iostream>
using namespace std;

int findPivit(vector<int> &arr,int start, int end){
    int ind=start-1,pivot=arr[end];
    for(int j=start;j<end;j++){
        if(arr[j] <= pivot){

            ind++;
            swap(arr[ind],arr[j]);
        }
    }
     ind++;
        swap(arr[ind],arr[end]);

    return ind;
}
void quickSort(vector<int> &arr,int start, int end){
    

    if(start<end){
        int pivit=findPivit(arr,start,end);

        quickSort(arr,start,pivit-1);
        quickSort(arr,pivit+1,end);
    }
}
int main() {
    vector<int> arr={5,3,6,2,4,1};
    quickSort(arr,0,arr.size()-1);
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
            
    return 0;
}