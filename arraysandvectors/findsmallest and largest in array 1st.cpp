//find smallenst largest in array;
#include<iostream>
using namespace std;
int main(){
	int arr[]={18,6,7,8,20,9};
	int len=6;
	int largest=arr[0];
	for(int i=1;i<len;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	cout<<largest;
}
