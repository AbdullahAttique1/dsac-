#include <iostream>
using namespace std;
    int mirrorDistance(int n) {
       int myn=n;
        int newn=myn%10;//25=>5
        cout<<myn;
        int fix=newn;//5
  myn=n/10;
       
         fix=fix *10 +myn;
              
        return fix-n;
        
    }
int main() {
    int n=25;
      int anser=mirrorDistance(n);
     // cout<<anser;     
    return 0;
}