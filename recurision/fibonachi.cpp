#include <iostream>
using namespace std;
int foundFibonachi(int n){
    if(n==0 || n==1){
        return n;
    }
   return  foundFibonachi(n-1)+foundFibonachi(n-2);
}
int main() {
 int n=5;
 cout<<foundFibonachi(n)<<endl;           
    return 0;
}