#include<iostream>
using namespace std;
int main(){
    int size=5;
    int array[]={32,16,3,4,6};
     int lastresult=0;
    for(int st=0;st<size;st++){
         int result=0;
        for(int end=st; end<size;end++){          
           result+=array[end];
         // cout<<array[end]<<" ";
           
        }
        lastresult=max(result,lastresult);
         
        cout<<endl;
       
    }

     cout<<"Last result: "<< lastresult;
}