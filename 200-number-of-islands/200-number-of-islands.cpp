class Solution {
public:
    static bool  isValidsol(int i,int j,int row,int col){return(i>=0 and i<row and j>=0 and j<col);}
    void dfs(int i,int j,int row,int col,vector<vector<char>>&grid)
    {

        if(!isValidsol(i,j,row,col) or grid[i][j]!='1'){return;}

        grid[i][j]=2;
        dfs(i+1,j,row,col,grid);
        dfs(i-1,j,row,col,grid);
        dfs(i,j+1,row,col,grid);
        dfs(i,j-1,row,col,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        
        int answer=0;
        for(int i=0;i<rows;++i)
        {
            for(int j=0;j<cols;++j)
            {
                if(grid[i][j]=='1')
                {
                    answer++;
                    dfs(i,j,rows,cols,grid);
                }
            }
        }
        return answer;
    }
};