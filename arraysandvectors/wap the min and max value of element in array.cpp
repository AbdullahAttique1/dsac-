//write a function that swap the min and max number of array.
#include<iostream>
using namespace std;
void swapArrayVlaueMinMax(int arr[],int size){
	int minArray=0;
	int maxArray=0;
	
	for(int i=0;i<size;i++){
		if(arr[i]<arr[minArray]){
			minArray=i;
		}	
		if(arr[i]>arr[maxArray]){
			maxArray=i;
		}
	}
swap(arr[minArray],arr[maxArray]);		
}
int main(){
	int arr[]={45,56,75,85,96,32,12};
	int size=7;
	swapArrayVlaueMinMax(arr, size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
