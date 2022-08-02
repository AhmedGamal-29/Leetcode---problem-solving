class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int result = 0;
        int last = 0, current = 0;
        for(int i = 0; i < nums.size(); i++) 
        {
            
            if(i > last) 
            {
                last = current;
                result ++;;
            } 
            if(i+nums[i] > current) 
            {
                current = i+nums[i];
            }
        }
        return result;
        
    }
};