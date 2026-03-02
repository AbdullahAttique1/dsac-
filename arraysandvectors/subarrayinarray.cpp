#include<iostream>
using namespace std;
int main(){
    int size=5;
    int array[]={1,2,3,4,6};
    int target=9;
     int lastresult=0;
    for(int st=0;st<size;st++){
        for(int end=st; end<size;end++){
            int result=0;
           
            for(int i=st;i<=end;i++){
              
                result=result+array[i];
               
                if(result==target){
                    break;
                }

                lastresult=result;
                
            }
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<"Last result"<< lastresult;
}