class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n =nums.size();
        int l=0, r=n-1;
        while (l <= r) {
            
            //medium of vector
            int m = l + (r - l) / 2;

                //get target
            if (nums[m] == target)
                return m;

                //ignore left half
            if (nums[m] < target)
                l = m + 1;

                //ignore right half
            else
                r = m - 1;
         }
  
    // can't get the target
    return -1;
        
    }
};