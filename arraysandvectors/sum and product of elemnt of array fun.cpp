//write a function to calculate sum and product of all element in the array;
#include<iostream>
using namespace std;
int product(int arr[],int size){
	int product=1;
	for(int i=0;i<size;i++){		
		product=product*arr[i];
	}
	return product;
}
int sum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
	int arr[]={1,45,67,78,32,56,95};
	int size=7;
cout<<sum(arr,size) << endl;
cout<<product(arr,size);
		
}
