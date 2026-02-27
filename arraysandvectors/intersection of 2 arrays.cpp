//intersection of 2 arrays
#include<iostream>
using namespace std;
void intersectionArray(int arr1[],int arr2[],int size){
	int newArray[8];
	int k=0;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			
		
				if(arr1[i]==arr2[j]){
					
			newArray[k]=arr1[i];
				k++;
				break;	
		}
		}
	

		

		
	}
	for(int i=0;i<k;i++){
			cout<<newArray[i]<<" ";
	}
}

int main(){
	int arr1[]={1,2,3,4};
	int arr2[]={3,4,5,6};
	int size=4;
	intersectionArray(arr1,arr2,size);
}
