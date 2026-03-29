#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseString(){
string s= "the sky is blue";
string ans="";


reverse(s.begin(),s.end());

int n=s.length();
for(int i=0;i<n;i++){
string word="";
while(i<n && s[i] != ' '){
word+=s[i];
i++;
}

reverse(word.begin(),word.end());
if(word.length() > 0){

ans+=word+' ';
}
}

return ans.substr(1);

}
int main() {
       cout<< reverseString()<<endl;
    return 0;
}