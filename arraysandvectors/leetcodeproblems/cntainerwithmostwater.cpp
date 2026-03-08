#include <iostream>
#include<vector>
using namespace std;
int main() {
            vector<int> height={1,8,6,2,5,4,8,3,7};
            int n=height.size();
            int maxArea=0;
            for(int i=0; i<n;i++ ){
                for(int j=i+1;j<n;j++){
                    int width=j-i;
                    int heightf=min(height[i],height[j]);
                    int area=heightf*width;
                    maxArea=max(area,maxArea );
                    
                }
                cout<<endl;
            }
            cout<<maxArea;
    
    return maxArea;
}