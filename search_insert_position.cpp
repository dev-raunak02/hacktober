int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, index, mid;
        nums.push_back(INT_MAX);
        while(l <= r){
            mid = (l+r)>>1;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target && target < nums[mid+1]){
                return mid+1;
            }else if(nums[mid] < target){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return 0;
    }
