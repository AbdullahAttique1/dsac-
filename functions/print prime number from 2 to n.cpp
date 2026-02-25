//check number is prime or not
#include<iostream>
using namespace std;
bool checkPrime(int n){

	for(int i=2;i<n;i++){
		if(n%i==0){
		return false;
		}
	}
	
	return true;
	
}
int main(){
	int n=100;
	 cout << "Prime numbers from 2 to " << n << " are: ";

	for(int i=2;i<n;i++){
	if(checkPrime(i)){
		cout<<i<<" ";
	}	
	}
	
	return 0;
}
