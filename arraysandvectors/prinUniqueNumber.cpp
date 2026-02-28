//First leetcode problem print a unique number in aray
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {1, 1, 3, 3, 5};
   int result;
    for(int i : nums){
       result=result ^ nums;
    }
return result;

 
}