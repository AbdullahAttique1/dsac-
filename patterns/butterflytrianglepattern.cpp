#include<iostream>
using namespace std;
int main(){
	int n=8;
	for(int i=1;i<=n;i++){
		int number=1;
		for (int j=1; j<=i;j++){
			cout<<number;
			number=number+1;			
		}
		for(int j=0;j<2*(n-i);j++){
			cout<<" ";
		}
			for (int j=i; j>0;j--){
			cout<<j;
					
		}
		cout<<endl;
	}
	
	
		for(int i=n-1;i>=0;i--){
			int number=1;
		for (int j=1; j<=i;j++){
			cout<<number;
			number=number+1;		
		}
		for(int j=0;j<2*(n-i);j++){
			cout<<" ";
		}
			for (int j=i; j>0;j--){
			cout<<j;			
		}
		cout<<endl;
	}
	return 0;

}
