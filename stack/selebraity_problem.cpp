#include <iostream>
#include <vector>
#include <stack>

using namespace std;
int funFindCelebraity(vector<vector<int>>&matrix){
stack<int> s;
for(int i=0;i<matrix.size();i++){
    s.push(i);
}
while(s.size()>1){
    int i=s.top();
    s.pop();
    int j=s.top();
    s.pop();
    if(matrix[i][j]==0){
        s.push(i);
    }else{
        s.push(j);
    }
}
int celeb=s.top();
for(int i=0;i<matrix.size();i++){
    if((i!=celeb) && (matrix[i][celeb] ==0 ||matrix[celeb][i] ==1)){
        return -1;
    }
}
return celeb;
}
int main() {
    vector<vector<int>>matrix = {{1, 1, 0},
                {0, 0, 0},
                {0, 1, 1}};

    int finddelebraity=funFindCelebraity(matrix);
    cout<<finddelebraity;
            
    return 0;
}