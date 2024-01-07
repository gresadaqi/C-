#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> shuffleArray(vector<int>& nums, int n) {
        vector<int> result;

        for (int i = 0; i < n; ++i) {
            result.push_back(nums[i]);
            result.push_back(nums[i + n]);
        }

        return result;
    }
};

int main() {
    // Ushtrime
    vector<int> nums = { 1, 2, 3, 4, 5, 6 };
    int n = nums.size() / 2;

    Solution sol;
    vector<int> result = sol.shuffleArray(nums, n);

    cout << "Shuffled Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

}