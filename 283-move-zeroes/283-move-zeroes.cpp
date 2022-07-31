class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        if(nums.size()==0 || nums.size()==1)
            return;
        
        int l=0, r=0;
        int size = nums.size();
        
        while(r<size)
        {
            if(nums[r]==0)
                r++;
            else
            {
                int temp = nums[l];
                nums[l] = nums[r];
                nums[r] = temp;
                r++;
                l++;
            }
        }
        
    }
};