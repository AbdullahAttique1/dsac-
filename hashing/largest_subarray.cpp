#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
int main() {
   vector<int> arr={9,4,0,20,3,10,5};
   int k = 33;
   unordered_map<int,int> m;
    int n=arr.size();
    vector<int> prefixSUm(n,0);

    prefixSUm[0]=arr[0];
    for(int i=1;i<n;i++){
prefixSUm[i]=prefixSUm[i-1] + arr[i];

    }
    int count=0;

    for(int j=0;j<n;j++){
if(prefixSUm[j] == k ) count ++;
int val=prefixSUm[j] - k;
if(m.find(val) != m.end() ){
count+=m[val];
}
if(m.find(prefixSUm[j]) == m.end()){
        m[prefixSUm[j]] =0;
    }
    m[prefixSUm[j]]++;
    }

    
    

  

            
    return 0;
}