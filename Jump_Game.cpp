class Solution {
public:
    int jump(vector<int>& nums) {
        
        
        int n = nums.size();
        
        if(n<=1)
            return 0;
        
        int ladder = nums[0];
        int stairs = nums[0];
        
        int jumpCount = 1;
        
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
                return jumpCount;
            
            if(i + nums[i] > ladder)
            {
                ladder = i + nums[i];
            }
            
            stairs--;
            if(stairs==0)
            {
                jumpCount++;
                stairs = ladder -i;
            }
        }
        
        return jumpCount;
    }
};