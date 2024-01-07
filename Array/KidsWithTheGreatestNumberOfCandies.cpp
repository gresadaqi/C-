#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *max_element(candies.begin(), candies.end());
        vector<bool> result;

        for (int candy : candies) {
            result.push_back(candy + extraCandies >= maxCandies);
        }

        return result;
    }
};

int main() {
    // Ushtrime
    vector<int> candies = { 2, 3, 5, 1, 3 };
    int extraCandies = 3;
    Solution sol;
    vector<bool> result = sol.kidsWithCandies(candies, extraCandies);
    cout << "Kids with candies: ";
    for (bool hasEnoughCandies : result) {
        cout << (hasEnoughCandies ? "true" : "false") << " ";
    }
    cout << endl;

    return 0;
}