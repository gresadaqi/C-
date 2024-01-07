#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jewelCount = 0;

        for (char stone : stones) {
            if (jewels.find(stone) != std::string::npos) {
                jewelCount++;
            }
        }

        return jewelCount;
    }
};

int main() {
    // Example usage
    Solution sol;
    string jewels = "aA";
    string stones = "aAAbbbb";

    int result = sol.numJewelsInStones(jewels, stones);

    // Display the result
    cout << "Number of jewels in stones: " << result << endl;

    return 0;
}
