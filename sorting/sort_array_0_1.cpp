#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
void sortAlogo(vector<int> &arr, int size){
    int zero=0 , one=0, two=0;

for(int i=0;i<size;i++){
if(arr[i] == 0){
    zero++;
}
if(arr[i] == 1){
    one++;
}
if(arr[i] == 2){
    two++;
}



int idx=0;
for(int i=0;i<zero;i++){
    arr[idx++]=0;
}
for(int i=0;i<one;i++){
    arr[idx++]=1;
}
for(int i=0;i<two;i++){
    arr[idx++]=2;
}
}

   
       for(int val : arr){
        cout<<val;
       }

}
int main() {
    vector<int> arr={2,0,2,1,1,0,1,2,0,0};
    int size=arr.size();
       sortAlogo(arr, size); 
       
   
    return 0;
}