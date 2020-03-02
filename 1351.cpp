class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            int start = 0;
            int end = grid[i].size() - 1;
            int middle = start + (end - start) / 2;

            while (start < end) {
                if (grid[i][start] < 0) {
                    break;
                }
                
                if (grid[i][middle] < 0) {
                    if (middle != 0 && grid[i][middle - 1] >= 0) {
                        start = middle;
                        break;
                    }
                    end = middle - 1;
                } else {
                    start = middle + 1;
                }
                middle = start + (end - start) / 2;
            }
            
            if (grid[i][start] < 0) {
                count += grid[i].size() - start;
            }
        }
        return count;
    }
};
