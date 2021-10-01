int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0, max = 0;
        for(auto i:nums){
            if(i){
                res++;
            }else{
                if(res > max){
                    max = res;
                }
                res=0;
            }
        }
        if(res > max)
            max = res;
        return max;
    }
