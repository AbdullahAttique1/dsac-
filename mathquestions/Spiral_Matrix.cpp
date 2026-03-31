#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
        vector<int> ans;
        int m=matrix.size(),n=matrix[0].size();
        int fr=0, fc=0 , er=m-1,ec=n-1;
        while (fr<=er && fc <= ec){
            // fisrt row
            for(int i=fc;i<=ec;i++){
                ans.push_back(matrix[fr][i]);
            }
//last coulmn right
              for (int j = fr + 1; j <= er; j++) {
                ans.push_back(matrix[j][ec]);
            }
//buttom 
     if (fr < er) {
  for (int i = ec - 1; i >= fc; i--) {
     ans.push_back(matrix[er][i]);
}
     }

//left coumsn
 if (fc < ec) {
   for(int j=er-1;j>fr;j--){
         ans.push_back(matrix[j][fc]);
    }

}
              
            fr++;fc++;er--;ec--;
        }
        
        for(int val : ans){
            cout<<val;
        }

    return 0;
}