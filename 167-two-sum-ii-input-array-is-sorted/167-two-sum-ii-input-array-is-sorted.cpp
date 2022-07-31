class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indices;
        int size = numbers.size();
        int l=0,r=size-1;;
        
        
        while(l<r)
        {
            int twosum= numbers[l]+numbers[r];
            if( twosum == target)
            {
                indices.push_back(l+1);
                indices.push_back(r+1);
                break;
            }
            else if(twosum < target)
                l++;
            else //two sum > target
                r--;
            
        }
     
        
        return indices;
    }
};