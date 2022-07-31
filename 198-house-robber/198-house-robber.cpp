class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        if(size==2)
            return max(nums[0], nums[1]);
        if(size==1)
            return nums[0];
        if(size==0)
            return 0;
        
        vector<int> money (size, 0);
        money[0]=nums[0];
        money[1]=max(nums[0], nums[1]);
        
        for(int i=2;i<nums.size();i++){
            
            money[i] = max(money[i-1], nums[i] + money[i-2]);
            
        }
        
        //last element in vector which is the maximum
        return money.back();
    }
};