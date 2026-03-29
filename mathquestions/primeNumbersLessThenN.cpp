#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

bool isPrime(int num){
    if(num <= 1) return false;

    for(int i=2;i<=sqrt(num);i++){
if(num%i == 0){
    return false;

}
    }
    return true;
    }

int main() {
    int n=50;   

    int count=0;
    
    for(int i=2;i<n; i++){
if(isPrime(i)){
    count++;
}
    }

            cout<<count;
    return 0;
}