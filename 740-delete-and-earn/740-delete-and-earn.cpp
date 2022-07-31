class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int ans[10010]={0},num[10010]={0},l=nums.size(),maxn=0,mini=10010;
        for(int i=0 ; i<l ; i++){
            num[nums[i]]++;
            maxn=max(maxn,nums[i]);
            mini=min(mini,nums[i]);
        }
        
        for(int i=mini ; i<=maxn ; i++){
            ans[i]+= i*num[i];
        }
        
        for(int i=mini ; i<=maxn ; i++){
            if(i == 1) continue;
            ans[i]=max(ans[i-1],ans[i-2]+ans[i]);
        }
        
        return ans[maxn];
    }
};