#include <iostream>
#include<vector>
using namespace std;
int main() {
          vector<int> height={1,8,6,2,5,4,8,3,7};
          int i=0;
          int n=height.size();
          int j= n -1;
          int maxsize=0;
            while (i<j)
               {
                int width=j-i;
               int ht=min(height[i],height[j]);
               int size=ht*width;
               maxsize=max(maxsize,size);
               height[i]<height[j] ? i++ :  j--;
        
               }   
                 return maxsize;
}