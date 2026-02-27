//reverce an array 
#include<iostream>
using namespace std;
int reverseArray(int arr[],int size){
	int firstValue=0;
	int lastVlaue=size-1;
	while(firstValue < lastVlaue){
	swap(arr[firstValue], arr[lastVlaue]);
		firstValue++;
		lastVlaue--;
	}
	
	
}
int main(){
	int arr[]={1,54,85,75,98,12,45};
	int size=7;
	reverseArray(arr,size);
for(int i=0;i<size;i++){
	cout<<arr[i]<<endl;
}
	
}
