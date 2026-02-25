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
int main(){
	
	int factrial5=factorialNumber(5);
	cout<<factrial5<<endl;
	int factrial4=factorialNumber(4);
	cout<<factrial4;
	
	return 0;	
}
