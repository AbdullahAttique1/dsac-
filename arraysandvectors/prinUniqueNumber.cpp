//First leetcode problem print a unique number in aray
#include <iostream>
#include <vector>
using namespace std;

int main() {

vector<int> nums = {1, 1, 3, 3, 5};
int result = 0;
for(int i : nums) {
    result = result ^ i;
}
cout << result << endl;
return 0;

 
}