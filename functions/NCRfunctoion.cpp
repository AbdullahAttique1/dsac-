//factoriln
#include<iostream>
using namespace std;

int factorialNumber(int n){
	int factorial=1;
	for(int i=1;i<=n;i++){
		factorial*=i;
	}
	return factorial;
}

int ncr(){
	 int n = 12;
    int r = 4;
	int factorialN=factorialNumber(n);
	int factorialR=factorialNumber(r);
	int factorialncr=factorialNumber(n-r);
	return factorialN/(factorialR*factorialncr);
}
int main(){
	
	int finalRes=ncr();
	cout<<finalRes;
	
	return 0;	
}
