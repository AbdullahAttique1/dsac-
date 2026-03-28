#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isValid(char ch ){
   if(ch >='0' && ch <='9' ||  (tolower(ch) >= 'a' && tolower(ch) <= 'z') )  return true;
  else  return false;
}

bool checkPen(){   
   string str="raceacar";  
  
int st=0;
int  end=str.size()-1;

   while(st < end){
if(!isValid(str[st])) {
st++;
continue;

}
if(!isValid(str[end])){
    end--;
    continue;
}
if(tolower(str[st]) != tolower(str[end])){
   return false;
}

st++;end--;

   }

   return true;



}
int main() {
         cout<<checkPen();   
    return 0;
}