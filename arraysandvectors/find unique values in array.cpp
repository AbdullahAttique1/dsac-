//find unique values in array 
#include<iostream>
using namespace std;
int findUnique(int arr[],int size){
	int unique=0;
	for(int i=0;i<size;i++){
		int count=0;
		for(int j=0;j<size;j++){
			if(arr[i] == arr[j]){
				count++;
				unique=i;
				
			}
		}
		
		if(count==1){
			return arr[unique];
		}
		
	}
	return -1;
	
}
int main(){
	int arr[]={1,2,4,4,1,2,9};
	int size=7;
	cout<<findUnique(arr,size);
}
