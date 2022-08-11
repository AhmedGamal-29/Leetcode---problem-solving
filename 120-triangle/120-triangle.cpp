class Solution {
public:
    /*
    int getMin(vector<int> x)
    {
        int min=x[0];
        for(int i=1;i<x.size();i++)
        {
            if(x[i]<min)
                min=x[i];
        }
        
        return min;
    }*/
    
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        if(triangle.size()==1)
            return triangle[0][0];
        int ans = numeric_limits<int>::max();
    
        int last_row = triangle.size()-1;
        int last_row_size = triangle[last_row].size();
        
        vector<vector<int>>result (last_row_size,(vector<int>(last_row_size,0)));
        
        result[0][0] = triangle[0][0];
        
        
        for(int i=1;i<triangle.size();i++)
        {
            result[i][0] = result[i-1][0] + triangle[i][0];
            result[i][i] = result[i-1][i-1] + triangle[i][i];
            
            for(int j=1;j<triangle[i].size()-1;j++)
            {
                result[i][j] = 
                    min ( (result[i-1][j-1] + triangle[i][j]) , (result[i-1][j] + triangle[i][j]));
                if(i == triangle.size()-1)
                {
                    ans = min(ans,result[i][j]);
                }
            }
            if(i==triangle.size()-1){
                ans = min(ans,result[last_row][last_row]);
                ans = min(ans,result[last_row][0]);
            }
        }
        
        return ans;
        
        
        
        
    }
};