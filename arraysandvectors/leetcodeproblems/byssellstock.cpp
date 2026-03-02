#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> prices={7,1,5,3,6,4};           
            int size =prices.size();
            int maxprofit=0;
           
            int buyingDay=prices[0];
        for(int i=1;i<size;i++){
             int sellingDay=prices[i];
           
            if(prices[i]>buyingDay){
maxprofit=max(maxprofit,prices[i]-buyingDay);
            }

  
            buyingDay=min(buyingDay,prices[i]);

        }
        cout<<maxprofit;
    return 0;
}