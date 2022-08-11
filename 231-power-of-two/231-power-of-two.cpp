class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        for(long long i=1;i<=n;i*=2)
        {
            if(i==n)
                return true;
        }
        
        return false;
    }
};