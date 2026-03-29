#include <iostream>
#include <algorithm>
#include <string>
#include <vector> 
using namespace std;

bool isFreqSame(int frequency[],int frequency2[]){
for(int i= 0;i<26;i++){
    if(frequency[i] != frequency2[i]){
        return false;
    }
}
return true;
}

bool stringPermutaion(){
    
    int frequency[26]={0};
 string s1="ab";
 string s2="eidbaooo";

 for(int i=0;i<s1.length();i++){
    int index=s1[i] - 'a';
    frequency[index]++;
 }

 int windowSize=s1.length();

 for(int i=0;i<s2.length();i++){
    int windIndex=0,idx=i;
    int winFreq[26]={0};

    while(idx<s2.length() && windIndex < windowSize ){
        int index=s2[idx] - 'a';
    winFreq[index]++;
    windIndex++;idx++;
    }

  if(isFreqSame(winFreq, frequency)){
    return true;
}
 }

return false;
}



int main() {
cout<<stringPermutaion()<<endl;

return 0;
}