#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isValid(char ch ){
   if(ch >='0' && ch <='9' ||  (tolower(ch) >= 'a' && tolower(ch) <= 'z') )  return true;
  else  return false;
}

bool checkPen(){   
   string s="raceacar";  
  
int st=0;
int  end=s.size()-1;

   while(st < end){
if(!isValid(s[st])) {
st++;
continue;

}
if(!isValid(s[end])){
    end--;
    continue;
}
if(tolower(s[st]) != tolower(s[end])){
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