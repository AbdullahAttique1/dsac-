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
cout<<isprime[i];
    }

          
    return 0;
}