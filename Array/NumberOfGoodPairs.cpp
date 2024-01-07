#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int pairs = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] == nums[j]) {
                    pairs++;
                }
            }
        }
        return pairs;
    }
};

int main() {
    //Shembull
    vector<int> input = { 1, 2, 3, 1, 2, 3, 1, 2, 3 };

    Solution sol;
    int result = sol.numIdenticalPairs(input);

    cout << "Number of Identical Pairs: " << result << endl;

    return 0;
}