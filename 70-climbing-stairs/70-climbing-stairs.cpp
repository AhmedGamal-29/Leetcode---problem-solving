class Solution {
public:
    
    int climbStairs(int n) {
        
        if(n==0 || n==1)
            return 1;
        if(n==2)
            return 2;
        
        int arr[50];
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<n+1;i++)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }
        
        //to get fibonacci of n+1
        return arr[n]+arr[n-1];
        
        
        
    }
};