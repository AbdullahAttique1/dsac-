#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;



int main() {
    int n=50;   
    vector<int> isprime(n,true);

    int count=0;
    
    for(int i=2;i<n; i++){
        if(isprime[i]){
            count++;
            for(int j=i*2;j<n;j=j+i){
                isprime[j]=false;
            }
        }

    }

          
    return 0;
}