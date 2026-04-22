#include <iostream>
using namespace std;
class CircularQue{
    int *arr;
    int currSize, cap;
    int f,r;
    public:
    CircularQue(int size){
        currSize=0;
cap=size;
arr=new int[cap];
f=0;
 r=-1;
    }
    void push(int data){
if(currSize == cap){
    cout<<"Circular Array is full";
    return; 
}
r=(r+1) % cap;
arr[r]=data;
  currSize++;
    }
    void pop(){
        if(empty()){
            cout<<"CQ is Empty";
        }else{
            f=(f+1)%cap;
            currSize--;
        }
    }
    int front(){
         if(empty()){
            cout<<"CQ is Empty";
               return -1; 
        }
        return arr[f];
          
    }
    bool empty(){
        return currSize==0;
    }
    void printArr(){
        for(int i=0;i<cap;i++){
            cout<<arr[i] << " ";
        }
    }

};
int main() {
        CircularQue cq(3);
        cq.push(1);
        cq.push(2);
        cq.push(3);
        cq.printArr();
        cq.push(4);
    return 0;
}