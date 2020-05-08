/*
 * Find number of islands(1s)
 * Island(1s) is surrounded by Water(0s)
 *
 * Edges are surrounded by water (0s)
 */

class Solution {
public:
    void checkIsland(vector<vector<char>>& grid, int r, int c){
        int nr = grid.size();
        int nc = grid[0].size();
        
        grid[r][c] = '0'; // Visited
        
        if ((r-1>=0) && (grid[r-1][c] == '1')) checkIsland(grid, r-1, c);
        if ((c+1<nc) && (grid[r][c+1] == '1')) checkIsland(grid, r, c+1);
        if ((r+1<nr) && (grid[r+1][c] == '1')) checkIsland(grid, r+1, c);
        if ((c-1>=0) && (grid[r][c-1] == '1')) checkIsland(grid, r, c-1);
        
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int totalRow = grid.size();
        if (!totalRow) return 0;
        int totalCol = grid[0].size();
        int numslandsCount{0};
        
        for (int r=0; r<totalRow; r++){
            for (int c=0; c<totalCol; c++){
                if (grid[r][c] == '1'){
                    numslandsCount++;
                    checkIsland(grid, r, c);
                }
            }
        }
        
        return numslandsCount;
    }
};