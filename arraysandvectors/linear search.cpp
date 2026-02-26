//linear search
#include<iostream>
using namespace std;
int linearSearch(int arr[],int len, int target){
	for(int i=1;i<len;i++){
		if(arr[i]==target){
			return i;
		}
	}
	return -1;

}
int main(){
	int arr[]={1,8,98,75,45,56,42};
	int len=7;
	int target=8;
	cout<<linearSearch(arr,len,target);
	
}
