#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        ans = nums;
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = ans[ans[i]];
        }
        return nums;
    }
};

int main() {
    //Shembull:
    vector<int> input = { 0, 2, 1, 5, 3, 4 };
Solution sol;
    vector<int> result = sol.buildArray(input);

   
    cout << "Built Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
