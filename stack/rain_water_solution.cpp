class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> leftboundry(n,0);
        vector<int> rightboundry(n,0);
        leftboundry[0]=height[0];
        rightboundry[n-1]=height[n-1];
        //left_boundry
        for(int i=1;i<n;i++){
          leftboundry[i]=max(leftboundry[i-1],height[i]);
                  }
//right_boundry
        for(int i=n-2;i>=0;i--){
          rightboundry[i]=max(rightboundry[i+1],height[i]);
          
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(rightboundry[i],leftboundry[i])-height[i];
        }
return ans;
    }
};