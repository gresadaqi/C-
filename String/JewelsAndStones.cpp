#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jewelCount = 0;

        for (char stone : stones) {
            if (jewels.find(stone) != string::npos) {
                jewelCount++;
            }
        }

        return jewelCount;
    }
};

int main() {
    //Shembull
    string jewels = "aA";
    string stones = "aAAbbbb";
    Solution sol;
    int result = sol.numJewelsInStones(jewels, stones);
    cout << "Number of Jewels in Stones: " << result << endl;
    return 0;
}
