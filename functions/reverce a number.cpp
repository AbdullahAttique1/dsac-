//reverce a number
#include<iostream>
using namespace std;
int reverceNumber(int n){
	int newnumber=0;
	while(n>0){
	int lastdigit=n%10;
		newnumber=newnumber * 10 + lastdigit; ;
		n=n/10;		
			}
	return newnumber;
}
int main(){
	int number=456;
	int revercedNumber=reverceNumber(number);
	cout<<revercedNumber;
}
