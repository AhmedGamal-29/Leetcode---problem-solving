class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        
        if(mat.size()*mat[0].size() != r*c)
            return mat;
        
        vector<vector<int>> new_mat(r, vector<int>(c, 0));
        
        int x=0,y=0;
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                new_mat[i][j] = mat[x][y];
                y++;
                if(y==mat[0].size())
                {
                    y=y%mat[0].size();
                    x++;
                }
                
            }
        }
    
    return new_mat;
    }
};