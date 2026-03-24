#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
void insertionSort(vector<int> num, int size){
  for(int i=1; i<size;i++){
    int current=num[i];
    int prev=i-1;
    while(prev < 0  && num[prev] > current){
       num[prev+1] =num[prev-1];
        prev --;
    }
    num[prev+1]=current;
  }
}
int main() {
    vector<int> num={1,5,4,3,2,1};
    int size=num.size();
      insertionSort(num, size);  
      
      for(int val : num){
        cout<<val;
      }
    return 0;
}