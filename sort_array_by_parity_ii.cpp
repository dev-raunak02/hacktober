 vector<int> sortArrayByParityII(vector<int>& nums) {
        stack<int> oddAtEvenIndex;
        for(int i=0; i<nums.size(); i++){
            if((i%2 == 0) && (nums[i] % 2 != 0)){
                oddAtEvenIndex.push(i);
            }
        }
        
        if(oddAtEvenIndex.size() == 0)
            return nums;
        
        for(int i=0; i<nums.size(); i++){            
            if((i%2 != 0) && (nums[i] % 2 == 0)){
                int index = oddAtEvenIndex.top();
                swap(nums[i], nums[index]);
                oddAtEvenIndex.pop();
            }
        }
        return nums;
    }
