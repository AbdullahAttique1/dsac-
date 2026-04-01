#include <iostream>
using namespace std;
int findMatrix(int matrix[][3],int rows,int coulmn){
    int result=0;
for(int i=0;i<rows;i++){
    int add=0;
    for(int j=0;j<coulmn;j++){
        add+=matrix[i][j];
    }
    result=max(result, add);
}
return result;
}
int main() {
int matrix[4][3]={{1,2,3},{5,6,7},{8,9,10},{11,12,13}};
int rows=4;
int coulmn=3;

int key =9;

 int result= findMatrix(matrix, rows, coulmn);
cout<<result<<endl;
    return 0;
}