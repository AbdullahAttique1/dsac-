//check is number is prime or not
#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter a number to check if a number is prime or not"<<endl;
	cin>>number;
	bool isPrime=true;
	for(int i =2;i<=(number-1); i++){
		if(number%i==0){
			isPrime=false;
			 break;
		}else {
			isPrime=true;
		}
	}
	if(number<=1){
		isPrime=true;
	}
	
	if(isPrime){
		cout<<"Number is Prime"<<endl;
	}else{
		cout<<"Number is Not Prime"<<endl;
	}
	cout<<number;

}
