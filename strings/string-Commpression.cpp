#include <iostream>   
#include <vector>   
#include <string>
using namespace std;
int  strignCompresion(){
    vector<string> chars ={"a","a","b","b","c","c","c"};
    vector <string> ans;
    int idx=0;

for(int i=0;i<chars.size();i++){
    int count=0;
    string ch=chars[i];

    
while(i<chars.size() && chars[i] ==ch ){
  count++;
  i++;
    }

  ans.push_back(ch);
  if(count>1){         
             string str=to_string(count);
             for(char dig : str){
                ans.push_back(string(1, dig));                
             
             }

    }

i--;

}

for(string val : ans){
cout<<val;
}
return 0;
}
int main() {
   cout<<strignCompresion()<<endl;
    return 0;
}