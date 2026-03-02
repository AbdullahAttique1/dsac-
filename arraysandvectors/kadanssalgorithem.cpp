#include<iostream>
using namespace std;

int main()
{
    int arr[]={3,-4,1,2,3,4,5,-8};
    int maxSum=0;
    int n=8;
    int currentSum=0;
for(int val : arr){
currentSum+=val;
 maxSum=max(currentSum,maxSum);
if(currentSum<0){
    currentSum=0;
}

}

cout<<maxSum;

    return 0;

}