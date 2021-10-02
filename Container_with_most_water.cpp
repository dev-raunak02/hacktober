class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        
        int b1 = 0;
        int b2 = n-1;
        
        int ans = INT_MIN;
        
        int c=0;
        
        bool flag1=false;
        bool flag2= false;
        
        while(b1<=b2)
        {
            
            if(flag1==true){
                if(height[b1-1]>height[b1])
                {
                    b1++;
                    continue;
                }
            }
            
            else if(flag2==true)
            {
                if(height[b2+1]>height[b2])
                {
                    b2--;
                    continue;
                }
            }
            
            int b = min(height[b1],height[b2]);
            int l = b2-b1;
            
            int a = l*b;
            
            ans = max(ans,a);
            
            if(height[b1]<=height[b2])
            {
                b1++;
                flag1= true;
                flag2=false;
            }
            else{
                b2--;
                flag1=false;
                flag2=true;
            }
          
            
        }
        
        return ans;
        
    }
};