#include <iostream>
using namespace std;
pair<int,int> findMatrix(int matrix[][3],int rows,int coulmn,int key){
for(int i=0;i<rows;i++){
    for(int j=0;j<coulmn;j++){
        if(key==matrix[i][j]){
            return {i,j};
        }
    }
}
return {-1,-1};
}
int main() {
int matrix[4][3]={{1,2,3},{5,6,7},{8,9,10},{11,12,13}};
int rows=4;
int coulmn=3;

int key =9;

  pair<int,int> result = findMatrix(matrix, rows, coulmn, key);

if(result.first != -1)
        cout << "Found at: (" << result.first << ", " << result.second << ")";
    else
        cout << "Not found";
    return 0;
}