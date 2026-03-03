//9. Palindrome Number
#include <iostream>
#include<vector>
using namespace std;
int main() {
            vector<int> myarr;
    int x=121;
    int reversednumber=0;
    int nmbrForreverce=x;
    if(nmbrForreverce<0){
        return false;
    }
while(nmbrForreverce>0){
  
   reversednumber=reversednumber*10+nmbrForreverce%10;
   
nmbrForreverce=nmbrForreverce/10;
   
}



if(reversednumber == x){
    return true;
}
return false;

}