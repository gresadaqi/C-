#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);

        for (int i = 0; i < n; ++i) {
            ans[i] = nums[i];
        }

        for (int i = 0; i < n; ++i) {
            ans[i + n] = nums[i];
        }

        return ans;
    }
};

int main() {
    //Shembull:
    vector<int> nums = { 1, 2, 3 };

    Solution sol;
    vector<int> result = sol.getConcatenation(nums);

    cout << "Concatenated vector: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
