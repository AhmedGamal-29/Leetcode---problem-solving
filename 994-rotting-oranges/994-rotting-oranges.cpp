#include<algorithm>
class Solution {
public:
    
    bool out_of_range(int &row ,int &col , vector<vector<int>> &grid){
        if( row < 0 || row > grid.size()-1){
            return true;
        }
        else if ( col< 0 || col > grid[0].size()-1){
            return true;
        }
        else{
            return false;
        }
    }
    
    
    vector<pair<int,int>> direction = { {-1,0},{1,0},{0,-1},{0,1} };
    
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh_num = 0;
        queue<pair<int,int>> rottenQ;
        
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == 2)
                    rottenQ.push({i,j});
                if(grid[i][j] == 1)
                    fresh_num +=1;
            }

        if(!fresh_num)
            return 0;
        
        int minutes = 0;
        
        while(!rottenQ.empty() && fresh_num){
            
            for(int i=rottenQ.size()-1;i>=0;i--){
                pair<int,int> index = rottenQ.front();
                rottenQ.pop();
                
                
                for(int k=0;k<4;k++){
                    int row = index.first+direction[k].first;
                    int col = index.second + direction[k].second;
                    
                    if(out_of_range(row,col,grid))
                        continue;
                    
                    if(grid[row][col] == 1){ 
                        fresh_num -= 1;
                        grid[row][col] = 2;
                        rottenQ.push({row,col});
                    }
                    else if(grid[row][col] == 2){
             
                        
                    }
                }
            }
            minutes+=1;
        }
        if(fresh_num)
            minutes = -1;
        
        return minutes;
    }
};
