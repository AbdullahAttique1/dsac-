#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main() {
    vector<int>  nums = {1,3,4,2,2}; 
    vector<int>ans;
    unordered_set<int> m;

    for(int val : nums){
 if(m.find(val) != m.end()){
    return val;
 }
 m.insert(val);
    }
            
    return 0;
}