class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if (nums.empty() || nums.size() <= 1)
		    return;
        
        if (k>nums.size())
		    k %= nums.size();
        
        
        reverse(nums.begin(),nums.end());
        
        auto right_k = nums.begin() + k;
        reverse(nums.begin(),right_k);
        
       
        reverse(right_k,nums.end());
       
        
        
//         int last = nums.size()-1;
//         int size = nums.size();
        
//         int s = size%2==0? size/2 : (size/2)+1;

        
//         if(size%2!=0)        int temp[s];
//         int j=0;
//         for(int i=0;i<s;i++)
//         {
//             temp[i] = nums[i+k];
//             nums[i+k]=nums[i];
//         }
//         // if(size%2!=0)
//         //     temp[s-1] = nums[size-1];
        
//         for(int i=0;i<s;i++)
//             cout<<temp[i];
//         {
//             nums[last]=temp[0];
            
//             for (int i=1;i<s;i++)
//                 nums[i-1]=temp[i];
            
//         }
//         else
//         {
//             for(int i=0;i<s;i++)
//                 nums[i]=temp[i];
//         }
            
        
        
    }
};