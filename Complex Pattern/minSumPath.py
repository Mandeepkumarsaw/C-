from typing import List

class Solution:
    def solve(self, i: int, j: int, row: int, col: int, grid: List[List[int]], dp: List[List[int]]) -> int:
        if i >= row or j >= col:
            return float('inf')    #ensures out‑of‑bounds paths are ignored.

        if i == row-1 and j == col-1:
            return grid[i][j]    

        if dp[i][j] != -1:
            return dp[i][j]    

        left = self.solve(i, j+1, row, col, grid, dp)
        down = self.solve(i+1, j, row, col, grid, dp)

        dp[i][j] = grid[i][j] + min(left, down)       #At each cell (i, j), you add the current grid value and choose the minimum of moving right or down.
        return dp[i][j]

    def minPathSum(self, grid: List[List[int]]) -> int:
        m = len(grid)
        n = len(grid[0])
        dp = [[-1 for _ in range(n)] for _ in range(m)]
        return self.solve(0, 0, m, n, grid, dp)



if __name__ == "__main__":
    grid1 = [[1,3,1],
             [1,5,1],
             [4,2,1]]
    grid2 = [[1,2,3],
             [4,5,6]]

    sol = Solution()
    print("Minimum Path Sum (grid1):", sol.minPathSum(grid1))  # Expected: 7
    print("Minimum Path Sum (grid2):", sol.minPathSum(grid2))  # Expected: 12
