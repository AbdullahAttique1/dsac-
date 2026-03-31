#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main() {
vector<vector<int>> grid = {{1,3},{2,2}};   
unordered_set<int> m;
vector<int>ans;
int n=grid.size();
int a,b;
int expected_sum=0,actula_sum=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        actula_sum+=grid[i][j];
if(m.find(grid[i][j]) !=m.end()){
    a=grid[i][j];
ans.push_back(a);
}
m.insert(grid[i][j]);
    }
}
expected_sum=(n*n)*(n*n+1)/2;
b=expected_sum+a-actula_sum;
ans.push_back(b);
for(int val: ans){
    cout<<val;
}
    return 0;
}