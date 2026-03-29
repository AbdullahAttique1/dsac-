#include <iostream>
#include <algorithm>
#include <string>
#include <vector> 
using namespace std;


int main() {

    int frequencys1[25]={0};
    int  frequencys2[25]={0};
 string s1="ab";
 string s2="eidbaooo";

 for(int i=0;i<s1.length();i++){
    int index=s1[i] - 'a';
    frequencys1[index]++;
 }

 for(int i=0;i<s2.length();i++){
    int index=s2[i] - 'a';
    frequencys2[index]++;

 }

 int winsize=s1.length();

 for(int i=0;i<26;i++){
   int firstWin= frequencys2[winsize];
   cout<<firstWin;

 }


    return 0;
}