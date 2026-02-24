#include<iostream>
using namespace std;

int main(){

    int n = 4;

    // Upper Part
    for(int i=0; i<n; i++){

        for(int j=0; j<n-i; j++)
            cout<<" ";

        cout<<"*";

        for(int j=0; j<2*i-1; j++)
            cout<<" ";

        if(i>0)
            cout<<"*";

        cout<<endl;
    }

    // Lower Part
    for(int i=n-2; i>=0; i--){

        for(int j=0; j<n-i; j++)
            cout<<" ";

        cout<<"*";

        for(int j=0; j<2*i-1; j++)
            cout<<" ";

        if(i>0)
            cout<<"*";

        cout<<endl;
    }

    return 0;
}
