
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int n = mat.size();

        for (int i = 0; i < n; ++i) {
            int j = n - i - 1;
            ans += mat[i][i] + (i == j ? 0 : mat[i][j]);
        }

        return ans;
    }
};

int main() {
    //Shembull
    vector<vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
     Solution sol;
    int result = sol.diagonalSum(matrix);
    cout << "Diagonal sum: " << result << endl;

    return 0;
}

