#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;
bool isPali(string s){
string s2=s;
reverse(s2.begin(),s2.end());

return s2==s;
}
void helper(string s,vector<vector<string>> &ans, vector<string> &partition  ){
if(s.size() == 0){
    ans.push_back(partition);
    return;
}
for(int i=0;i<s.size();i++){
    string part=s.substr(0,i+1);
if(isPali(part)){
partition.push_back({part});
helper(s.substr(i+1),ans,partition);
partition.pop_back();
}
}

}
int main() {
    string s = "aab";
      vector<string> partition ;
    vector<vector<string>> ans;
   
helper(s,ans,partition); 


    return 0;
}