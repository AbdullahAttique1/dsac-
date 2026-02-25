//calculate sum of number of digits
#include<iostream>
using namespace std;
int sumDigits(int num){
	int sum=0;
	while(num>0){
		int lastDigit=num%10;
		num=num/10;
		sum=sum+lastDigit;
	}
	return sum;
}
int main(){
	int sum=sumDigits(456);
	
	cout<<sum;

}
