class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> box[3][3];
        
        //row
        for(int i=0;i<9;i++)
        {
            //col
            for(int j=0;j<9;j++)
            {
               char c = board[i][j];
			
                if(c != '.') 
                {               
                    //check if it is found
                    if(row[i].count(c) || col[j].count(c) ||                                                                box[i/3][j/3].count(c))
                        return false;
                }
                
				col[j].insert(c);
				row[i].insert(c);
				box[i / 3][j / 3].insert(c);
                
            }
        }
	 return true;
        
    }
};