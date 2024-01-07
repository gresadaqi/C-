
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> result;

        for (int i = 0; i < m; ++i) {
            int minInRow = INT_MAX;
            int minIndex = -1;
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] < minInRow) {
                    minInRow = matrix[i][j];
                    minIndex = j;
                }
            }
            bool isLucky = true;
            for (int k = 0; k < m; ++k) {
                if (matrix[k][minIndex] > minInRow) {
                    isLucky = false;
                    break;
                }
            }
            if (isLucky) {
                result.push_back(minInRow);
            }
        }

        return result;
    }
};

int main() {
    //Shembull
    vector<vector<int>> matrix = { {3, 7, 8}, {9, 11, 13}, {15, 16, 17} };

    Solution sol;
    vector<int> result = sol.luckyNumbers(matrix);
    cout << "Lucky Numbers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
