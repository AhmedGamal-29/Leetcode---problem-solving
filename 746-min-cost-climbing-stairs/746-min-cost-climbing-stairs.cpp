class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        
         switch ( size )
         {
            case 0 : return 0;
            case 1 : return cost[0];
            case 2 : return min(cost[0], cost[1]);
            default: break;
        }
        
        for(int i=2;i<size;i++)
        {
            cost[i] += min(cost[i-1], cost[i-2]);
        }
        
        return min(cost[size-1] , cost[size-2]);
        
    }
};