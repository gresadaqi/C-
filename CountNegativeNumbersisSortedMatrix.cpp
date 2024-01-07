
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        int row = 0;
        int col = n - 1;

        while (row < m && col >= 0) {
            if (grid[row][col] < 0) {
                count += (m - row);
                col--;
            }
            else {
                row++;
            }
        }

        return count;
    }
};

int main() {
    //Shembull
    vector<vector<int>> grid = { {4, 3, 2, -1},
                                {3, 2, 1, -1},
                                {1, 1, -1, -2},
                                {-1, -1, -2, -3} };

    Solution sol;
    int result = sol.countNegatives(grid);
    cout << "Count of negatives: " << result << endl;

    return 0;
}
