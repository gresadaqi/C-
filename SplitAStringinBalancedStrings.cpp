
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {

        int count = 0;
        int balance = 0;

        for (char c : s) {
            if (c == 'L') {
                balance++;
            }
            else {
                balance--;
            }

            if (balance == 0) {
                count++;
            }
        }

        return count;
    }
};
int main() {
    string inputString = "RLRRLLRLRL";

    Solution sol;
    int result = sol.balancedStringSplit(inputString);

    cout << result << endl;

    return 0;
}