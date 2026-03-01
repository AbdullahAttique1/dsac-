#include<iostream>
using namespace std;
int main(){
    int size=5;
    int array[]={1,2,3,4,6};
    for(int st=0;st<size;st++){
        for(int end=st; end<size;end++){
            for(int i=st;i<=end;i++){
                cout<<array[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}