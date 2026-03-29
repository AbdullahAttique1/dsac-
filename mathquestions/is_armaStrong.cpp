#include <iostream>

using namespace std;
int cubeplus=0;
bool isArmastrong(int n){
    int copy=n;
    while(n!=0){

   
int digit=n%10;
cubeplus+= (digit * digit * digit);
n=n/10;
 }
if(cubeplus==copy){

    return true;
}else{
   return false;
}
}
int main() {
int n=153;
    if(isArmastrong(n)){
        cout<<"Number is Armastrong";
    }else{
         cout<<"Number is not Armastrong";
    }
            
    return 0;
}