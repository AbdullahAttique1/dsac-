#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> nums={24,28};

    int a =nums[0];
    int b =nums[1];
    int gcd=0;
    while(a!=0 && b!=0){
if(a>b){
    a=a-b;
}else{
b=b-a;
}

    }
   
       if(a==0){

    gcd=b;
}else{
    gcd=a;
}     
cout<<gcd;
    return 0;
}