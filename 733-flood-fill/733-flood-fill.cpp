class Solution {
public:
     bool out(vector<vector<int>>& image, int  &r, int &c){
        int row = image.size(), col = image[0].size();
        
        if(r <0 || r> row-1 || c <0 || c > col-1)
            return true;
        
        return false;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
    {
        vector<vector<int>> move = {{1,0},{-1,0},{0,1},{0,-1}};
        
        //positions of grid
        queue<pair<int,int>> q;
        q.push({sr,sc});
        
        int old_color = image[sr][sc]; 
        
        if(color == image[sr][sc])
            return image;
        
        image[sr][sc] = color;
        
        while(!q.empty())
        {
            int count = 0;

            int size = q.size();
            for(int i=0;i<size;i++)
            {
                pair<int,int> pixel = q.front();
                q.pop();

                //4-directional
                for(int k=0;k<4;k++)
                {
                    int t_r = pixel.first + move[k][0];
                    int t_c = pixel.second + move[k][1];
                    //not out of the boundaries
                    if(!out(image,t_r,t_c))
                    {
                        if(image[t_r][t_c] == old_color)
                        {
                            q.push({t_r,t_c});
                            image[t_r][t_c] = color;
                        }                    
                    }
                }
                
            }             
        }
        
        
        return image;
        
        
     
        
    }
};