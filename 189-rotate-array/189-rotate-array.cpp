class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if (nums.empty() || nums.size() <= 1)
		    return;
        
        if (k>nums.size())
		    k %= nums.size();
        
        // reverse first element with last element
        reverse(nums.begin(),nums.end());
        
        //get number of shifts (k)
        auto right_k = nums.begin() + k;
        
        //shift element with k to right 
        reverse(nums.begin(),right_k);
        
       // get last element with before k times in vector
        reverse(right_k,nums.end());
       
        
            
        
        
    }
};