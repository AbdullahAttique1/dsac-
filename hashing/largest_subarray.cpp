#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr={1,1,1};
    int n=arr.size();
    vector<int> prefixSUm(n,0);
    int k = 2;

    prefixSUm[0]=arr[0];
    for(int i=1;i<n;i++){
prefixSUm[i]=prefixSUm[i-1] + arr[i];

    }

    for(int val: prefixSUm){
        cout<<prefixSUm;
    }

            
    return 0;
}