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
	int n=14;
	
	if(checkPrime(n)){
		cout<<"Number is prime";
	}else{
		cout<<"Number is not prime";
	}
	return 0;
}
