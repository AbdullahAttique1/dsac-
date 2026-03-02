#include <iostream>
using namespace std;
int main() {
            double x=5;
            int n=5;
            double ans=1;
            int binaryform=n;
            if(n==0) return 1.0;
            if(x==0) return 0.0;
            if(x==1) return 1.0;
            if(x = -1 && n%2 !=0 ) return -1.0;
            if(x = -1 && n%2 ==0 ) return 1.0;
            if(n<0){
                x=1/x;
               binaryform=-binaryform;
            }

            while(binaryform>0){
                if(binaryform % 2==1){
ans *=x;
                }
                x*=x;
                binaryform /=2;
            }

            cout<<ans;

    return 0;
}

