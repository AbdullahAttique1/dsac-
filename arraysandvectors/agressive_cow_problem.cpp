#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isVAlid(  vector<int> stalls , int k, int mid){

    int lastcaw=stalls[0];
    int caw=1;
for(int i=1;i<stalls.size();i++){

    if(stalls[i] - lastcaw >= mid){
        caw++;
lastcaw=stalls[i];
    }

    if(caw == k ){
        return true;
    }
}

return false;
}
int agressiveCow(){

    vector<int> stalls = {1, 2, 4, 8, 9};
    sort(stalls.begin(), stalls.end());
    int k=3;
    int start=1;
   int end = stalls.back() - stalls.front();
    int ans=-1;
    while(start<=end){
        int mid=start + (end-start)/2;
        if(isVAlid(stalls, k,mid)){
ans=mid;
start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
int main() {
    cout<<agressiveCow()<<endl;
            
    return 0;
}