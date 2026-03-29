#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;
void removePart(){
    string s="daabcbaabcbc";
    string part="abc";
 
while(s.find(part) != string::npos){
    int startpart=s.find(part);
    int endpart=part.length();
   s.erase(startpart,endpart);

}


for(char ch :s){
    cout<<ch;
}

}
int main() {
       removePart();     
    return 0;
}