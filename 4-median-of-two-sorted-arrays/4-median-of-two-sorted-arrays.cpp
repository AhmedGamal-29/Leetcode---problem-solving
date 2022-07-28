class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m =nums1.size();
        int n =nums2.size();
         double median;
        for(int i=0;i<m;i++)
            nums2.push_back(nums1[i]);
        int l =m+n;
        sort(nums2.begin(), nums2.end());
        if(l%2==0)
        {
            median= (double) (nums2[l/2] + nums2[(l/2)-1])/2;
        }
        else
        {
            median= (double) nums2[l/2];
        }
        
         return median;
        }
            
};