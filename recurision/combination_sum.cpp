#include <iostream>
#include <vector>
#include <set>
using namespace std;
set<vector<int>>s;
void findSUm( vector<int> &candidates,int target, vector<vector<int>> &ans,int indx,vector<int> &values){
    if(target == 0){
        if(s.find(values) ==s.end()){
            ans.push_back(values);
            s.insert(values);
        }
           return;
}

if(indx==candidates.size() || target < 0){
     return;
}

values.push_back(candidates[indx]);
 findSUm(candidates, target-candidates[indx],ans,indx+1,values);
 findSUm(candidates, target-candidates[indx],ans,indx,values);
values.pop_back();
 findSUm(candidates, target,ans,indx+1,values);

}
int main() {
    vector<int> candidates = {2,3,6,7};
    int  target = 7;
    vector<vector<int>> ans;
    vector<int> values;
    findSUm(candidates, target,ans,0,values);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans.size();j++){
            cout<<ans[i][j];
        }

    }
            
    return 0;
}