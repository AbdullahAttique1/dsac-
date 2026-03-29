#include <iostream>

using namespace std;
int main() {
    int x=  123;
 int res=0;
    while(x!=0){
        int digit=x%10;
res=(res*10)+digit;
x=x/10;
    }
  cout<<res;          
    return 0;
}